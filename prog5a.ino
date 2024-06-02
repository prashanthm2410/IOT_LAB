
const int buttonPin = 2; 
const int ledPin = 13;  
 
void setup() { 
  Serial.begin(9600); 
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT); 
} 
 
void loop() { 
  int buttonState = digitalRead(buttonPin); 
   
  if (buttonState == HIGH) { 
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed"); 
  } else { 
    digitalWrite(ledPin, LOW);  
     Serial.println("Button NOT Pressed");
  } 
} 
