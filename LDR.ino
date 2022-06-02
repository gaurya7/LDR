// Interfacing Arduino uno with LDR sensor

const int relayPin = 5; // digital pin 5 
const int ldrPin = A0; // analog pin 0

void setup() { //  Void setup function will only run once, after each powerup or reset of the Arduino board.

Serial.begin(9600);

pinMode(relayPin, OUTPUT); // Here relay is determined as an ouput or an indicator.

pinMode(ldrPin, INPUT); // Here LDR sensor is determined as input.

}

void loop() { // Void loop is ran again and again and contains main code.

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {

digitalWrite(relayPin, HIGH); // If LDR senses darkness relay pin high that means Light will glow.

Serial.print("Darkness over here,turn on the Light : ");

Serial.println(ldrStatus);

} else {

digitalWrite(relayPin, LOW); // If LDR senses light relay pin low that means Light will stop glowing.

Serial.print("There is sufficeint light , turn off the Light : ");

Serial.println(ldrStatus);

}

}