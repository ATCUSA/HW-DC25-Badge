#ifndef HW_MAINMENU_H
#define HW_MAINMENU_H

// required for "const char" and "PROGMEM"
#include <pgmspace.h>

// texts for menus

static const char PROGMEM itmBack[] = "< Back";
static const char PROGMEM itmOn[] = "On";
static const char PROGMEM itmOff[] = "Off";
static const char PROGMEM itmEnabled[] = "Enabled";
static const char PROGMEM itmDisabled[] = "Disabled";

//static const char PROGMEM itmRoot[] = "Main Menu";

//static const char PROGMEM itmWiFiTools[] = "WiFi Tools";
//static const char PROGMEM itmItem1[] = "Channel Activity";
//static const char PROGMEM itmItem2[] = "AP Scanner";

static const char PROGMEM itmSubmenu2[] = "Customization";
static const char PROGMEM itmItem3[] = "Nick/Alias";
static const char PROGMEM itmItem4[] = "Artwork";

static const char PROGMEM itmSubmenu3[] = "AP Scanner";
static const char PROGMEM itmItem5[] = "SSID List";

//static const char PROGMEM itmSubmenu4[] = "Blinky";
//static const char PROGMEM itmItem6[] = "Random";
//static const char PROGMEM itmItem7[] = "Cyclon";
//static const char PROGMEM itmItem8[] = "LED Chase";
//static const char PROGMEM itmItem9[] = "Flashlight";


static const char PROGMEM itmSubmenu5[] = "Credits ";
static const char PROGMEM itmItem10[] = "Companies";
static const char PROGMEM itmItem11[] = "Websites";


static const char PROGMEM itmSubmenu6[] = "Network Tools";
static const char PROGMEM itmSubmenu7[] = "Shouts";

////////////////////////////////////////////////////////////////
// menus - first item is menu title and it does not count toward cnt

 const char * const mnuRoot[] PROGMEM = {
  "HW-DC25 Badge",
  "WiFi Tools","Blinky",itmSubmenu3, itmSubmenu2, itmSubmenu5, itmSubmenu6, itmSubmenu7
  }; 
 const int cntRoot PROGMEM = 7;

 const char * const mnuWiFiTools[] PROGMEM = {
  "WiFi Tools",
  "Channel Activity","AP Scanner"
  };
 const int cntWiFiTools PROGMEM = 2;

 const char * const mnuBlinky[] PROGMEM = {
  "Blinky Modes",
  "Random", "Larson Scanner", "LED Chase", "Flashlight"
  };  
 const int cntBlinky PROGMEM = 4;

 const char * const mnuSubmenu2[]PROGMEM  = {
  itmSubmenu2,
  itmItem3, itmItem4
  }; 
 const int cntSubmenu2 PROGMEM = 2;

 const char * const mnuSubmenu3[] PROGMEM = {
  itmSubmenu3,
  itmItem5
  };  
 const int cntSubmenu3 PROGMEM = 1;

  const char * const mnuSubmenu5[] PROGMEM = {
  itmSubmenu5,
  itmItem10, itmItem11
  };  
 const int cntSubmenu5 PROGMEM = 2;

 const char * const mnuSubmenu6[] PROGMEM = {
  itmSubmenu6,
  itmEnabled,itmDisabled,itmBack
  };  
 const int cntSubmenu6 PROGMEM = 3;

 const char * const mnuSubmenu7[] PROGMEM = {
  itmSubmenu7,
  itmEnabled,itmDisabled,itmBack
  };  
 const int cntSubmenu7 PROGMEM = 3;

#endif