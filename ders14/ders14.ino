
int led1 = 5;
int led2 = 6;
int led3 = 10;
int led4 = 11;
 
int Parlaklik = 0;    
int Oran = 5;    

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
}

void loop() {
  analogWrite(led1, Parlaklik);
  analogWrite(led2, Parlaklik);
  analogWrite(led3, 255-Parlaklik);
  analogWrite(led4, 255-Parlaklik);  
  Parlaklik = Parlaklik + Oran;
  if (Parlaklik == 0 || Parlaklik == 255) {
    Oran = -Oran ;
  }
  delay(25);
}
