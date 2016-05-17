/***********************************************************
Clap Switch Simple Control
by
Chris Rouse
May 2016

Connections:

***********************************************************/
const byte ledPin = 13;
boolean trigger = false; // used to show clap output ON
int triggerLevel = 100; // change this if background noise is high
int outputReading; // voltage output from Clap Switch

/*********************************************************/
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // turn LED OFF

}
/*********************************************************/
void loop() {
  checkSwitch(); // see if the switch has been triggered
  if(trigger){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWriteledPin, LOW);
  }
}
/*********************************************************/
void checkSwitch() {
  outputReading = analogRead(14);
  if(outputReading > background){
    trigger = false
  }
  else{
    trigger = true;
  }
}
/*********************************************************/
