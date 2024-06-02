/*const int irReceiverPin = 2;

void setup() {
  pinMode(irReceiverPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irValue = digitalRead(irReceiverPin);

  if (irValue == LOW) {
    Serial.println("RECEIVED");
  } else {
    Serial.println("NOT RECEIVED");
  }

  delay(100); // Add a small delay to avoid flooding the serial monitor
}





>>>>>>>>>>>>>>>alternate>>>>>>>>>>>>>>>*/
#include <IRremote.h>

int RECV_PIN = 11; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 

void setup() { 
	Serial.begin(9600); 
	irrecv.enableIRIn(); 
} 

void loop() { 
	if (irrecv.decode(&results)) {
		Serial.println(results.value, HEX); 
		irrecv.resume(); 
	}
	delay(100); 
}
