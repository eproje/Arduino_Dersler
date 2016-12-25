int sayac1=0;
int sayac2=0;
int sayac3=0;
int sayac4=0;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  sayac1=sayac1+1;
  sayac2++;
  sayac3++;
  sayac4++;
  
  if (sayac1==100){
    digitalWrite(12, 1-digitalRead(12));
    sayac1=0;
  }
  if (sayac2==200){
    digitalWrite(11, 1-digitalRead(11));
    sayac2=0;
  }
  if (sayac3==500){
    digitalWrite(10, 1-digitalRead(10));
    sayac3=0;
  }
  
  if (sayac4==1000){
    digitalWrite(9, 1-digitalRead(9));
    sayac4=0;
  }
  delay(1);
}

