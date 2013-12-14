#define sizearray(a)  (sizeof(a) / sizeof((a)[0]))
int web_module_headers(const char * page){

  //Print headers
  printf("\n<html>\n<head>\n<meta charset=\"utf-8\" /><title>Chromecast Configuration Panel - Eureka Rom</title>\n");
  //jquery insert
printf("\n    <link href=\"bundle.css\" media=\"screen\" rel=\"stylesheet\" type=\"text/css\" />");
printf("\n    <script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/vendor/jquery-ui-1.8.18.custom.min.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/vendor/chosen.jquery.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/vendor/jquery.placeholder.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/Equalizer.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/appreciate.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/commutator.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/datepicker.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/pagination.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/scrollbox.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/slideshow.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/tabbox.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/starbar.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/checkbox.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/radio.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/player.js\" type=\"text/javascript\"></script>");
printf("\n    <script src=\"javascripts/SCF.ui/currentlyPlaying.js\" type=\"text/javascript\"></script>");
printf("\n  </head>");
printf("\n  <body>");
printf("\n    <img alt=\"\" class=\"background-light\" src=\"images/background-light.png\">");
printf("\n    <div class=\"container\">");
printf("\n      <div class=\"wrapper clearfix\">");
printf("\n        <div class=\"col1of4\">");
printf("\n          <div class=\"site-info-links\">");
printf("\n          &nbsp;");
printf("\n          </div>");
printf("\n        </div>");
printf("\n        <div class=\"col1of2\">");
printf("\n          <div class=\"futurico-content\">");
printf("\n            <div class=\"site-info\">");
printf("\n              <h1 class=\"sitename\">");
printf("\n                <img src=\"te_logo_web.png\"/>");
printf("\n                <span class=\"version\">1.0</span>");
printf("\n              </h1>");
printf("\n              <div class=\"about\">");
printf("\n                <span class=\"legend-left\"></span>");
printf("\n                <span class=\"legend-center\">Chromecast Web Panel</span>");
printf("\n                <span class=\"legend-right\"></span>");
printf("\n              </div>");
printf("\n            </div>");
printf("\n          </div>");
printf("\n        </div>");
printf("\n        <div class=\"col1of4 last-col\">");
printf("\n          &nbsp;");
printf("\n        </div>");
printf("\n      </div>");
printf("\n      <div class=\"content\">");
printf("\n");
printf("\n        <div class=\"mbl\">");
printf("\n          <div class=\"header\">");
printf("\n            <div class=\"wrapper clearfix\">");
printf("\n              <div class=\"col1of4 header-controls\">Build Version: 1.0.0 (11/30/2013)");
printf("\n              </div>");
printf("\n              <div class=\"col1of2\">");
printf("\n                <ul class=\"header-navigation\">");
if ( compStr(page, "home", sizearray(page) )) { 
printf("\n                  <li class=\"current\">");
} else {
printf("\n                  <li>");
}
printf("\n                    <a href=\"?page=home\">Home</a>");
printf("\n                  </li>");
if ( compStr(page, "status", sizearray(page) )) { 
printf("\n                  <li class=\"current\">");
} else {
printf("\n                  <li>");
}
printf("\n                    <a href=\"?page=status\">Status</a>");
printf("\n                  </li>");
if ( compStr(page, "settings", sizearray(page) )) { 
printf("\n                  <li class=\"current\">");
} else {
printf("\n                  <li>");
}
printf("\n                    <a href=\"?page=settings\">Settings</a>");
printf("\n                  </li>");
if ( compStr(page, "logcat", sizearray(page) )) { 
printf("\n                  <li class=\"current\">");
} else {
printf("\n                  <li>");
}
printf("\n                    <a href=\"?page=logcat\">Logcat</a>");
printf("\n                  </li>");
if ( compStr(page, "aboutus", sizearray(page) )) { 
printf("\n                  <li class=\"current\">");
} else {
printf("\n                  <li>");
}
printf("\n                    <a href=\"?page=aboutus\">About Us</a>");
printf("\n                  </li>");
printf("\n                </ul>");
printf("\n              </div>");
printf("\n              <div class=\"last-col\">");
printf("\n                <div class=\"header-search\">");
printf("\n                  <div class=\"text-rounded light\">");
printf("\n                    &nbsp;");
printf("\n                  </div>");
printf("\n                </div>");
printf("\n              </div>");
printf("\n            </div>");
printf("\n          </div>");
printf("\n        </div>");
printf("\n        <div class=\"wrapper clearfix\" style=\"color:#8d8d8d\">");
printf("\n");
}