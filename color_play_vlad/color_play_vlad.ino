int GREEN_VLAD = 3;

int RED_1_WILLARD = 4;
int RED_2_XERXES = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_VLAD, OUTPUT);
  pinMode(RED_1_WILLARD, OUTPUT);
  pinMode(RED_2_XERXES, OUTPUT);
}

void loop() {
 
   digitalWrite(GREEN_VLAD,HIGH);
   delay(100); 
   digitalWrite(GREEN_VLAD,LOW);
   delay(100); 

   digitalWrite(RED_1_WILLARD,HIGH);
   delay(100); 
   digitalWrite(RED_1_WILLARD,LOW);
   delay(100); 

   digitalWrite(RED_2_XERXES,HIGH);
   delay(100); 
   digitalWrite(RED_2_XERXES,LOW);
   delay(100); 
}
