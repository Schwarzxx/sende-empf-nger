  
  
  
  #include <RCSwitch.h>
 
  #define Rot 5
 
  #define Gruen 8

  #define Gelb 7

  #define Button 6

  int buttonStatus;
  

RCSwitch mySwitch = RCSwitch();


void setup() {


  mySwitch.enableTransmit(10); 

  mySwitch.enableReceive(2); 
  pinMode(Rot, OUTPUT);
  pinMode(Gelb, OUTPUT);
  pinMode(Gruen, OUTPUT);
  pinMode(Button,INPUT);

}



void loop() {
  
if ( mySwitch.available() ) 
  {
    int value = mySwitch.getReceivedValue(); 
  
    if (value == 5680 ) 
    {
      digitalWrite(Gelb, HIGH);
      delay(10000);

Serial.println("Code empfangen");
      
    } else {
      digitalWrite(Gruen, HIGH);
      delay(1000);
    }    }}
