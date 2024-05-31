void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
     pinMode(4,OUTPUT);
     pinMode(7,OUTPUT);
}
  //test array to make sure program is working
  int testArray[] = {4,7};
void loop() {
  // put your main code here, to run repeatedly:
    configurationOne();
    delay(1000);
    empty();
    delay(1000);
    
}

void configurationOne(){
  digitalWrite(4, HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
}

void empty(){
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
}
