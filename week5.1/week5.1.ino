int leddown[]={11,10,9,6};
int led[]={10,9,6,11};

void setup() {
  Serial.begin(9600);
  for (int i=0; i<=3; i++){
    pinMode(led[i],OUTPUT);
     Serial.println(led[i]);
  }
  
  
}

void loop() {
  for (int j=0; j<=3; j++){     
    for(int i=0; i<=255; i=i+5){
      analogWrite(led[j],i);
      analogWrite(leddown[j],255-i);
  
   delay (500);
  
    }
    
  }

}
