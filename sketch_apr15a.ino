const byte potPin = A0;
int val;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  val = analogRead(potPin);
  Serial.println(val);
  delay(500);
}
