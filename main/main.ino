#include <SoftwareSerial.h>


#define BT_RXD 8
#define BT_TXD 7

#define CCTV_ID "Pikachu-위도-경도"

SoftwareSerial bluetooth(BT_RXD, BT_TXD);

void setup()
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  bluetooth.write("AT+NAME="+CCTV_ID);
}

void loop()
{
  if(! bluetooth.available()){
    Serial.write("NO BLUETOOTH!");
  }
 delay(1000); // 1초마다 반복
}
