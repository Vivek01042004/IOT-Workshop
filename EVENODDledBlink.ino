void setup() {
  // put your setup code here, to run once:
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(25,HIGH);
  digitalWrite(32,HIGH);
  delay(1000);
  digitalWrite(25,LOW);
  digitalWrite(32,LOW);
  delay(1000);
  digitalWrite(26,HIGH);
  digitalWrite(33,HIGH);
  delay(1000);
  digitalWrite(26,LOW);
  digitalWrite(33,LOW);
  delay(1000);
}