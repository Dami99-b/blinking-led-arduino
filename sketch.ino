//this is my first beginner's Arduino Project

void setup() {
  
pinMode(13, OUTPUT) ; //sets Pin 13 as output
}

void loop() {
  
digitalWrite(13, HIGH); //turns on
  delay(1); //wait for 1 milliseconds 
    digitalWrite(12, LOW); //turns off 
      delay(1); //wait once more 
      
}

//written by Okah Prosper,aka,DaMillz