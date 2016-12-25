
       
int sayac = 0;    
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

  if (yon==1){
    digitalWrite(5+sayac,HIGH);   //    
  }else{
    digitalWrite(12-sayac,LOW);   // 
  }
  
  delay(100);
}
