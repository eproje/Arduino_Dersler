int led1=5;
int led2=6;
int led3=10;
int led4=11;

int Tekrar=10;
int sure=30;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
}

void loop() {
  int i;
  for(i=0;i<Tekrar;i++){
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    delay(sure);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    delay(sure);
  }
  for(i=0;i<Tekrar;i++){
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    delay(sure);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    delay(sure);
  }
}
