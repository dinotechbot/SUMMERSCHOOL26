int LED[]={9,10,11};
int no=3;
void setup(){
  for(int i=0;i<no;i++){
    pinMode(LED[i],OUTPUT);
  }
}
void loop(){
  for(int i=0;i<no;i++){
    digitalWrite(LED[i],LOW);
  }
  int randomled=random(no);
  digitalWrite(LED[randomled],HIGH);
  delay(2000);
}