
int led1 = 10;
int led2 = 11;
         
int Parlaklik = 0;    
int Oran = 5;    

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  analogWrite(led1, Parlaklik);
  analogWrite(led2, 255-Parlaklik);
  Parlaklik = Parlaklik + Oran;
  if (Parlaklik == 0 || Parlaklik == 255) {
    Oran = -Oran ;
  }
  delay(25);
}
