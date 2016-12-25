
void setup() {

  for (int pinNO=2 ; pinNO<14 ; pinNO++){//
    pinMode(pinNO,OUTPUT);     //
    digitalWrite(pinNO,LOW);   //
  }
}

void loop() {
 
    digitalWrite(2,!digitalRead(13));
    for (int pinNO=13 ; pinNO>2 ; pinNO--){
      digitalWrite(pinNO,digitalRead(pinNO-1));   //
    }
    delay(100);
}

