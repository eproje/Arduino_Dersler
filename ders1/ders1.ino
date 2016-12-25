// Arduino ATMEL AVR 8bit mikrodenetleyicileri kullanılarak gelistirilmistir.
// Önyükleyici(bootloader) yüklendikten sonra program USB-Seri port cevirici üzerinden yüklenenir.
// Arduino IDE (derleyici ve editor) C++ programlama dilini kullanir
// C++ nesne tabanlı ve hayal edebileceginiz herşeyi kodlayabileceğiniz en ileri dildir.
// 1.kural C ve C++ dillerinde büyük-kücük harf önemlidir. Ayrıca TÜRKÇE harfler kullanılmaz.
//
// bu örnek ile öğretilenler;
//
// 1. acıklama yazmak için satır önüne // işaretlerini koymalısınız
// 2 uzun açıklamalar için /* ...aciklamalar... */ işaretlerini kullamalisiniz
/*
 * 3. Arduino Kodu iki temel bloktan olusur 
 *    setup() programın başlangıcında sadece birkez calistirilan bölümdür. Başlangıc işlemleri buraya yazılır
 *    loop()  programın sürekli tekrarlanan gövdesidir. Çalıştırılacak tüm kodlar buraya yazılır
 * 4. örneklendirilen komutlar
 *    pinMode(pinNO, INPUT veya OUTPUT) ucun giriş veya çıkış olacağı belirtilir
 *    digitalWrite(pinNO,HIGH veya LOW) çıkış olarak tanımlı uç HIGH (1) veya LOW (0) yapılır
 *    delay(mili saniye olarak süre) işlemci belirtilen süre boyunca bekletilir.
 */
void setup() {
  // baslangic kodlarinizi buraya yazın, bir kere calisacaktir:
  pinMode(12,OUTPUT);   //
  pinMode(11,OUTPUT);   //
}

void loop() {
  // program kodunuzu buraya yazın, surekli tekrarlanacaktır:
  DigitalWrite(12,LOW);   //
  digitalWrite(11,HIGH);  //
  delay(250);             //
  digitalWrite(12,HIGH);  //  
  digitalWrite(11,LOW);   //
  delay(250);             //
}

/* 
 * SORULAR: 
 * 1. setup ve loop bölümlerinde yer alan her satırdaki komutun ne iş yaptığını
 * satır sonlarındaki açıklama işaretlerinden sonra yazınız. 
 * 2. büyük-küçük harf duyarlılığını test etmek için herhangi bir satırda 
 * büyük-küçük harf değişikliği yapınız ve tekrar yüklemeyi deneyiniz
 * Karşılaştığınız hata mesajını buraya not ediniz.
 * 
 * 
 */
