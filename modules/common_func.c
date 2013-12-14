#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "assert.h"
#include "string.h"
#include "minIni.h"
#include "malloc.h"
//required for chmod
#include "sys/types.h"
#include "sys/stat.h"

char * systemConfigValue = "/system/usr/share/eureka-apps/configs/eureka.ini";
char * userConfigValue = "/data/eureka/eureka.ini";

void urldecode2(char *dst, const char *src)
{
        char a, b;
        while (*src) {
                if ((*src == '%') &&
                    ((a = src[1]) && (b = src[2])) &&
                    (isxdigit(a) && isxdigit(b))) {
                        if (a >= 'a')
                                a -= 'A'-'a';
                        if (a >= 'A')
                                a -= ('A' - 10);
                        else
                                a -= '0';
                        if (b >= 'a')
                                b -= 'A'-'a';
                        if (b >= 'A')
                                b -= ('A' - 10);
                        else
                                b -= '0';
                        *dst++ = 16*a+b;
                        src+=3;
                } else {
                        *dst++ = *src++;
                }
        }
        *dst++ = '\0';
}


//Return configuration path (default to system if user unavailable)
char * configReadPath(void) {
  if(access(userConfigValue, R_OK) != -1 ) {
      return userConfigValue;
  } else {
      return systemConfigValue;
  }
}

//Return write configuration path
char * configWritePath(void) {
  return userConfigValue;
}

//Read configuration variable from config file
long read_config_var(const char *r_Section, const char *r_Key, char *r_Buffer){
  char *configStr = configReadPath();
  
  //get variable from userConfig
  ini_gets(r_Section, r_Key, "undefined", r_Buffer, 300, userConfigValue);
  
  //check if userConfig returned undefined, if so use systemConfig
  if(compStr("undefined", r_Buffer)){
    ini_gets(r_Section, r_Key, "undefined", r_Buffer, 300, systemConfigValue);
  }
  
}

//Write configuration variable to config file
long write_config_var(const char *w_Section, const char *w_Key, const char *w_Value){
  char *configStr = configWritePath(); 
  ini_puts(w_Section, w_Key, w_Value, configStr);
  chmod(configStr, S_IRUSR | S_IWUSR |S_IXUSR | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
}

int reboot (void){
  system("(curl -H \"Content-Type: application/json\" http://localhost:8008/setup/reboot -d \'{\"params\":\"now\"}\' -X POST)&");
  printf("Your Chromecast will reboot momentarily...");
}
//Function to compare 2 character arrays for string comparison
int compStr (const char *s1, char *s2, size_t sz) {
    while (sz != 0) {
        // At end of both strings, equal.
        if ((*s1 == '\0') && (*s2 == '\0')) break;

        // Treat spaces at end and end-string the same.
        if ((*s1 == '\0') && (*s2 == ' ')) { s2++; sz--; continue; }
        if ((*s1 == ' ') && (*s2 == '\0')) { s1++; sz--; continue; }

        // Detect difference otherwise.
        if (*s1 != *s2) return 0;
        s1++; s2++; sz--;
    }
    return 1;
}
