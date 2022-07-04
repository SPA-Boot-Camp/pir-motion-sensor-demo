int siren = 12;
int sensorPin = 11;
int led = 10;
int pir;

void setup() {
  pinMode(siren, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
 pir = digitalRead(sensorPin);
 if(pir == 1)
 {
  digitalWrite(siren, HIGH);
  digitalWrite(led, HIGH);
  Serial.println("Motion detected");
  delay(2000);
 }
 else
 {
  digitalWrite(siren, LOW);
  digitalWrite(led, LOW);
  Serial.println("no motion");
  delay(2000);
 }

}
