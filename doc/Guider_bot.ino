#include <SoftwareSerial.h>

#include <SPI.h>
#include <MFRC522.h>

// Define SoftwareSerial RX and TX pins
SoftwareSerial mySerial(0,1); // RX, TX

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); 


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
  pinMode(5,OUTPUT);

  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522

  digitalWrite(5,1);
}

void loop() {

  Rfid_init();
String x= mySerial.readString();
 if(x=="abcdefgh")
 {
   Serial.print("Received: ");
   Serial.println(x);
  mot_init();

 }
 // mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
}

void mot_init() {
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
}
void mot_deinit() {
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
}

void Rfid_init(){
  while(1){
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  
  // Select one of the cards
 if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "73 3F 84 2E" || content.substring(1) == "EC F8 6E 81" ){
    mot_deinit();
  }
 }
}
