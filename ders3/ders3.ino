// DERS 3
// bu örnek ile öğretilenler;
//
/*
 *  1. alt program tanımla ve kullanımı
 *  2. programda birden fazla millis() fonsiyonu kullanılabilir
 *  3. digitalRead(pinNO) belirtilen pinin durumunu okuyan fonksiyondur.
 *  4. degişken ve sabit sayı tanımlama
 */

unsigned long oncekiMillis1 = 0;//oncekiMillis1 isminde işaretsiz 32bitlik tamsayı tanımlanır
unsigned long oncekiMillis2 = 0;//oncekiMillis2 isminde işaretsiz 32bitlik tamsayı tanımlanır
const long sure1 = 500; // sure1 isminde 32 bitlik sabit sayı tanımlanır
int ledState = LOW;

void setup() {
  // baslangic kodlarinizi buraya yazın, bir kere calisacaktir:
  pinMode(12,OUTPUT);     //
  pinMode(11,OUTPUT);     //
  pinMode(8,OUTPUT);      //
  pinMode(7,OUTPUT);      //  
  digitalWrite(12,LOW);   //
  digitalWrite(11,HIGH);  //
  digitalWrite(7,LOW);    //
  digitalWrite(8,LOW);    //
}

void loop() {
  // program kodunuzu buraya yazın, surekli tekrarlanacaktır:
  unsigned long gecerliMillis = millis();//
  if (gecerliMillis - oncekiMillis1 >= sure1) {
    oncekiMillis1 = gecerliMillis;       //
    if (ledState == LOW) {
      ledState = HIGH;
      digitalWrite(12,HIGH);   //
      digitalWrite(11,LOW);  //
    } else {
      ledState = LOW;
      digitalWrite(12,LOW);   //
      digitalWrite(11,HIGH);  //
    }
  }


  if (gecerliMillis - oncekiMillis2 >= 20) {
    oncekiMillis2 = gecerliMillis;          
    if (ledState == LOW) {
      digitalWrite(8,LOW);   //
      pat(7);                //
    } else {
      digitalWrite(7,LOW);   //
      pat(8);                //
    }
  }  
  
  
}

//alt pogram
void pat(int pinNO){
  digitalWrite(pinNO,!digitalRead(pinNO));//
}

/* 
 * SORULAR: 
 * 1. setup ve loop bölümlerinde yer alan her satırdaki komutun ne iş yaptığını
 * satır sonlarındaki açıklama işaretlerinden sonra yazınız. 
 * 2. bir programda birden fazla alt program kullanılabilir mi?
 * 3. ledState degişkeninin görevi nedir?
 */
