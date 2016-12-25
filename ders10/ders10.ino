int sayac=0;

void setup() {

  for (int pinNO=2 ; pinNO<14 ; pinNO++){//
    pinMode(pinNO,OUTPUT);     //
    digitalWrite(pinNO,HIGH);   //
    sayac=2;
  }
}

void loop() {
 
    digitalWrite(sayac,HIGH);
    sayac++;
    if (sayac>14){sayac=2;}
    digitalWrite(sayac,LOW);
    delay(100);
}

