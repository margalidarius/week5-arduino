int led= 11;
int alt[]={255,191,127};
int baix[]={127, 64,0};
  

void setup() {
  
  pinMode (led, OUTPUT);
  Serial.begin (9500);
}

void loop() {
for (int j=0; j<=3; j++){
  for(int i=alt[j]; i>=baix[j]; i--){

    analogWrite(led, i);
    delay(100);
    Serial.println(j);
     Serial.println(i);
   
  }
   
  }
}
