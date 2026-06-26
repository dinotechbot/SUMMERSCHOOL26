int red=9;
int yellow=10;
int green=11;
int button=2;
int buzzer=7;
unsigned long best_time=99999;
void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer,OUTPUT);
  tone(buzzer, 1000, 500);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  Serial.println("WAIT FOR THE GREEN BUTTON AND PRESS THE BUTTON");
}
void loop(){
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  Serial.println("GAME STARTING NOW...");
  delay(3000);
  for(int i=0;i<3;i++){
  int random_led=random(0,3);
    int random_delay=random(200,1500);
    if(random_led==0){
      digitalWrite(red,HIGH);
      delay(random_delay);
      digitalWrite(red,LOW);
    }
    if(random_led==1){
      digitalWrite(yellow,HIGH);
      delay(random_delay);
      digitalWrite(yellow,LOW);
    }
    if(random_led==2){
      digitalWrite(green,HIGH);
      delay(random_delay);
      digitalWrite(green,LOW);
    }
    delay(random(100,500));
  }
  Serial.println("GREEN LIGHT GOES ON....");
  digitalWrite(green,HIGH);
  digitalWrite(buzzer,HIGH);
   unsigned long  start_timer=millis();
   unsigned long  reaction_time;
          while(digitalRead(button)==HIGH){  
          }
            reaction_time=millis()-start_timer;   
  digitalWrite(green,LOW);
  digitalWrite(buzzer,LOW);
  if(reaction_time<best_time){
    best_time=reaction_time;
  }
  Serial.print("Reaction Time: ");
  Serial.print(reaction_time);
  Serial.println(" ms");
  Serial.print("Best time:");
  Serial.print(best_time);
  Serial.println("ms");
  delay(3000);
}