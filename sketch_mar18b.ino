const byte LED = 13;
char val;
void setup(){

  Serial.begin(9600);
  Serial.println("Hello World,");
  Serial.print("\tLED pin is: ");
  Serial.print(LED);
  Serial.print("\nBYE!");
}

void loop() {
  if( Serial.available() ){
    val = Serial.read();
    if (val =='1'){
      digitalWrite(LED, HIGH);
      Serial.print("LED ON");
    }else if (val == '0'){
      digitalWrite(LED, LOW);
      Serial.print("LED OFF"); 
    }
  }
}

const byte potPin = A0;
int val;

void setup() {
  Serial.begin(9600);
}
void Loop:
 if( Serial.available() ){
    val = analogRead(potPin);
    Serial.println(val);
    delay(500);
 }
