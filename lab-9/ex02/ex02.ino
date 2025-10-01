int ledPin = 9;    
int brightness = 0;  
int fade = 5;  

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  analogWrite(ledPin, brightness);


  brightness = brightness + fade;

 
  if (brightness <= 0 || brightness >= 255) {
    fade = -fade;
  }

 
  delay(30);
}
