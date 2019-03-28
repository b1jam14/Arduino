#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);
byte unH[3]={B00000100,B00000010,B00011111};
byte deuxH[3]={B00011101,B00010101,B00010111};
byte troisH[3]={B00010001,B00010101,B00011111};
byte quatreH[3]={B00000111,B00000100,B00011111};
byte cinqH[3]={B00010111,B00010101,B00011101};
byte zeroH[3]={B00011111,B00010001,B00011111};
byte unB[3]={B00100000,B00010000,B11111000};
byte deuxB[3]={B11101000,B10101000,B10111000};
byte troisB[3]={B10001000,B10101000,B11111000};
byte quatreB[3]={B00111000,B00100000,B11111000};
byte cinqB[3]={B10111000,B10101000,B11101000};
byte sixB[3]={B11111000,B10101000,B11101000};
byte septB[3]={B00001000,B00001000,B11111000};
byte huitB[3]={B11111000,B10101000,B11111000};
byte neufB[3]={B10111000,B10101000,B11111000};
byte zeroB[3]={B11111000,B10001000,B11111000};

#include <Wire.h>
#include "RTClib.h"
RTC_DS3231 rtc;

int i = 0;

void setup() {
  delay(3000);
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
}

void loop() {
  DateTime now = rtc.now();
  
  switch(now.hour()){
    case 00:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 01:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 02:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 03:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 04:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 05:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 06:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 07:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 8:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 9:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 10:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 11:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 12:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 13:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 14:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 15:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 16:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 17:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 18:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 19:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 20:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 21:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 22:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 23:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
  }
  delay(1000);
  
  for(int i=0;i<8; i++){
     lc.setRow(0,i,(byte)0);
     delay(10);
  }

  lc.setRow(0,3,B01100110);
  lc.setRow(0,4,B01100110);
  delay(150);

  for(int i=0;i<8; i++){
     lc.setRow(0,i,(byte)0);
     delay(10);
  }
  switch(now.minute()){
    case 00:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 01:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 02:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 03:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 04:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 05:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 06:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 07:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 8:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 9:
      for(i=0; i<3; i++){
        lc.setRow(0,i,zeroH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 10:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 11:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 12:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 13:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 14:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 15:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 16:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 17:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 18:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 19:
      for(i=0; i<3; i++){
        lc.setRow(0,i,unH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 20:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 21:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 22:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 23:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 24:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 25:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 26:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 27:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 28:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 29:
      for(i=0; i<3; i++){
        lc.setRow(0,i,deuxH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 30:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 31:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 32:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 33:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 34:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 35:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 36:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 37:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 38:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 39:
      for(i=0; i<3; i++){
        lc.setRow(0,i,troisH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 40:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 41:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 42:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 43:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 44:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 45:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 46:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 47:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 48:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 49:
      for(i=0; i<3; i++){
        lc.setRow(0,i,quatreH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
    case 50:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,zeroB[i]);
        delay(5);
      }
      break;
    case 51:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,unB[i]);
        delay(5);
      }
      break;
    case 52:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,deuxB[i]);
        delay(5);
      }
      break;
    case 53:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,troisB[i]);
        delay(5);
      }
      break;
    case 54:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,quatreB[i]);
        delay(5);
      }
      break;
    case 55:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,cinqB[i]);
        delay(5);
      }
      break;
    case 56:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,sixB[i]);
        delay(5);
      }
      break;
    case 57:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,septB[i]);
        delay(5);
      }
      break;
    case 58:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,huitB[i]);
        delay(5);
      }
      break;
    case 59:
      for(i=0; i<3; i++){
        lc.setRow(0,i,cinqH[i]);
        lc.setRow(0,i+5,neufB[i]);
        delay(5);
      }
      break;
  }
  delay(1000);  

  for(int i=0;i<8; i++){
     lc.setRow(0,i,(byte)0);
     delay(10);
  }
  delay(300);
}
