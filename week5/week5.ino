int led1 = 13;
int led2 = 12;
int pot = A1;
int lastval=0;
int value=0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pot, INPUT);
Serial.begin(9600);
}

void loop() {
 
  lastval = value;
  value = analogRead(pot);
  
  
  if (lastval < value+3){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
   if (lastval>value-3){
     digitalWrite(led2,HIGH);
     digitalWrite(led1,LOW);
     
  } 
if (lastval==value) {
   digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
 }
Serial.println(value);
}
