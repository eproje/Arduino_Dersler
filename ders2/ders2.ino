// DERS 2
// bu örnek ile öğretilenler;
//
/*
 * 1. delay(..ms..) komutu işlemcinin boş işlemler yaparak belirtilen süre boyunca bekletilmesini amaçlar.
 *  Bu durum pratik olarak görünsede işlemci gücünü boş yere tüketmek anlamına gelir.
 *  Özellikle gelişmiş ve çok çekirdekli işlemcilerde bir işletim sistemi kullanıldığı düşünülürse boş bekleme görevleri
 *  işetim sisteminin gereksiz yere yavaşlatılması anlamına gelecektir.
 *  Bu örnekte delay() komutu kullanmadan nasıl istenilen sürelerde işler yapıldığı gösterilmiştir.
 *  
 *  2. millis() fonsiyonu; işlemci çalışmaya başladığı andan itibaren programdan bağımsız otomatik olarak sayan bir sayıcıdır. 
 *  ürettiği deger milisaniye cinsindendir
 *  
 *  3. digitalRead(pinNO) belirtilen pinin durumunu okuyan fonksiyondur.
 *  
 *  4. IF komutu  Türkçe eğer anlamına gelen karşılaştırma amaçlı komuttut. Bütün programlama dillerinde vardır.
 *  
 *    if (kontrol şartı){
 *      // kontrol şartı gerçekleşirse bu kısım çalıştırılır
 *    }
 *    else
 *    {
 *      // kontrol şartı gerçekleşmez ise bu kısım çalıştırılır
 *    
 *    }
 * 5. degişken ve sabit sayı tanımlama
 */

unsigned long oncekiMillis = 0;//oncekiMillis isminde işaretsiz 32bitlik tamsayı tanımlanır
const long sure1 = 250; // sure1 isminde 32 bitlik sabit sayı tanımlanır

void setup() {
  // baslangic kodlarinizi buraya yazın, bir kere calisacaktir:
  pinMode(12,OUTPUT);   //
  pinMode(11,OUTPUT);   //
  digitalWrite(12,LOW);   //
  digitalWrite(11,HIGH);  //
}

void loop() {
  // program kodunuzu buraya yazın, surekli tekrarlanacaktır:
  unsigned long gecerliMillis = millis();   //
  if (gecerliMillis - oncekiMillis >= sure1) {
    // her sure1 kadar sure gectiginde bu kısıma gelinir
    oncekiMillis = gecerliMillis;           //
    digitalWrite(12,1 - digitalRead(12));   //
    digitalWrite(11,1 - digitalRead(11));   //    
  }
}

/* 
 * SORULAR: 
 * 1. setup ve loop bölümlerinde yer alan her satırdaki komutun ne iş yaptığını
 * satır sonlarındaki açıklama işaretlerinden sonra yazınız. 
 * 2. delay() kullanılmadan yazılan programın avantajı nedir?
 * 
 */
