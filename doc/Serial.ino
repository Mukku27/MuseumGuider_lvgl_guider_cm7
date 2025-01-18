#include <SoftwareSerial.h>

// Define SoftwareSerial RX and TX pins
SoftwareSerial mySerial(10,11); // RX, TX



void setup() {
  // Open hardware serial communication for debugging
  Serial.begin(9600);//115200
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("Arduino ready to recieve data!");

  // Set the data rate for the SoftwareSerial port
  mySerial.begin(115200); // Match the baud rate expected by the NXP board
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {

 String x= mySerial.readString();
 if(x=="abcdefgh")
 {
 Serial.print("Received: ");
 Serial.println(x);
 digitalWrite(4,LOW);
 digitalWrite(3,HIGH);
 delay(2000);
 digitalWrite(4,LOW);
 digitalWrite(3,LOW);
 }
}
