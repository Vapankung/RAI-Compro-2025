
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int potVal = analogRead(A0); 
  Serial.print("Potentiometer Value: ");
  Serial.print(potVal);
  
  

  if (potVal > 512) {

    digitalWrite(13, HIGH);
    Serial.println("  ON");
  } else {
    digitalWrite(13, LOW);
    Serial.println("  OFF");
  }
  
  delay(100);
}