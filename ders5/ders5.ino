/*
 * Arduino ile kod yazmaya başlarken LED uygulamaları oldukça önemlidir. Bir çok temel mantık öğretilebilir.
 * Bu örnek alt program kullanımı ve alt programa degiskenler ile nasil deger aktarılabileceğini öğretmeyi amaçlar.
 */
int led1=13;
int led2=12;
int led3=11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void pat( int pin, int tekrar, int zaman )
{
  int i;
  for (i=0;i<tekrar;i++){
      digitalWrite(pin, !digitalRead(pin));   
      delay(zaman);        
  }
  digitalWrite(pin,LOW);
}

void loop() {
 pat(led1,10,30);
 delay(100);
 pat(led2,10,30);
 delay(100);
 pat(led3,10,30);
 delay(100);

}
