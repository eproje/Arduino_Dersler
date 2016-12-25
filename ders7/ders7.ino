int led1=10;
int led2=11;
int Tekrar=10;
int sure=30;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  int i;
  for(i=0;i<Tekrar;i++){
    digitalWrite(led1, 1);
    delay(sure);
    digitalWrite(led1, 0);
    delay(sure);
  }
  for(i=0;i<Tekrar;i++){
    digitalWrite(led2, 1);
    delay(sure);
    digitalWrite(led2, 0);
    delay(sure);
  }
}
