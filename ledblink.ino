int LED1=9;//white
int LED2=10;//green
//int LED4=12;
int LED3=11;//white
void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
    pinMode(LED3,OUTPUT);
      //pinMode(LED4,OUTPUT);
}
void loop(){
  digitalWrite(LED1,HIGH);
  Serial.println("white led on");
  delay(1000);
  digitalWrite(LED2,HIGH);
  //digitalWrite(LED4,HIGH);
  Serial.println("white green on");
  delay(1000);
digitalWrite(LED3,HIGH);
Serial.println("white led on");
  delay(2000);
digitalWrite(LED3,LOW);
Serial.println("white led off");
  delay(1000);
digitalWrite(LED2,LOW);
Serial.println("green led off");
  delay(1000);
digitalWrite(LED1,LOW);
Serial.println("white led off");
  delay(3000);
}