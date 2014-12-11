int ledPin = 13;

void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  redOnDelay(500);
  redOnDelay(500);
  redOnDelay(500);
  delay(2000);
  redOnDelay(200);
  redOnDelay(200);
  delay(5000);
}

int redOnDelay(int dur){
  digitalWrite(ledPin,HIGH);
  delay(dur);
  digitalWrite(ledPin,LOW);
  delay(dur);
  return 1;
}
