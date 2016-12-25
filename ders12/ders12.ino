
       
int sayac = 0;
int poz = 0;    
int yon = 1;    

void setup() {
  for (int i=5 ; i<13 ; i++){//
    pinMode(i,OUTPUT);     //
    digitalWrite(i,LOW);   //
  }
}

void loop() {
 
  sayac=sayac+1;
  
  if(sayac>7){
    yon = -yon;
    sayac=0;
  }
  digitalWrite(poz,LOW);

  if (yon==1){
    poz=5+sayac;
  }else{
    poz=12-sayac;
  }
  digitalWrite(poz,HIGH);
  delay(100);
}
