// DERS 4
// bu örnek ile öğretilenler;
//
/*
 *  1. for komutu
 *  for komutu belli sayıda tekrarlanan işlemler için kullanılır
 *  4 kısımdan oluşur.
 *  for (1.kısım ; 2.kısım ; 3.kısım){ 4.kısım }
 *  1.kısım öndeger anlamındadır (kullanılan değişkenin başlangıc degeri)
 *  2.kısım kontrol şartıdır (şart olduğu sürece işlem tekrarlanır)
 *  3.kısım artırma veya azaltma degerini belirler (adım sayısı)
 *  4.kısım yapılması istenen iş veya işlemler (tek satır veya çok satır olabilir)
*/

unsigned long oncekiMillis1 = 0;//oncekiMillis1 isminde işaretsiz 32bitlik tamsayı tanımlanır
const long sure1 = 50; // sure1 isminde 32 bitlik sabit sayı tanımlanır


void setup() {
  // baslangic kodlarinizi buraya yazın, bir kere calisacaktir:
  for (int pinNO=2 ; pinNO<14 ; pinNO++){//
    pinMode(pinNO,OUTPUT);     //
    digitalWrite(pinNO,LOW);   //
  }
}

void loop() {
  // program kodunuzu buraya yazın, surekli tekrarlanacaktır:
  
  unsigned long gecerliMillis = millis();//
  if (gecerliMillis - oncekiMillis1 >= sure1) {
    oncekiMillis1 = gecerliMillis;       //
    digitalWrite(2,!digitalRead(13));
    
    for (int pinNO=13 ; pinNO>2 ; pinNO--){
      digitalWrite(pinNO,digitalRead(pinNO-1));   //
    }
  }
}

/* 
 * SORULAR: 
 * 1. setup ve loop bölümlerinde yer alan her satırdaki komutun ne iş yaptığını
 * satır sonlarındaki açıklama işaretlerinden sonra yazınız. 
 * 2. satır sonlarında ; işareti var fark ettiniz mi? Bu C diline özel bir durumdur
 * herhangi bir satır sonundaki ; işaretini kaldırıp tekrar yükleme yaptığınıda 
 * aldığınız hatayı buraya not ediniz.
 * 
 * 3.girintilere dikkat ettinizmi? girinti olması veya olmaması önemli değildir?
 * girintiler ne işe yarıyor olabilir?
 * 
 * 
 * 4. ( ) parantezler ve { } küme parantezlerine dikkat ettiniz mi? bunlarda C diline özeldir.
 * ne işe yarıyor olabilirler?
 * 
 * 
 * 5. bu örneğin sonucunu LEDler ile izlediniz. Aynı örneği for komutunu kullanmadan yapabilirmisiniz?
 * 
 * 
 * 6. LEDlerde oluşan ışık görüntüsünün hareket yönünü ters çevirebilirmisiniz?
 * 
 * 
 */
