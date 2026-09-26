int switchState = 0;

int GREEN = 3;

int RED1 = 4;
int RED2 = 5;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);

  pinMode(2, INPUT);
}

void loop() {

  switchState = digitalRead(2);

  if (switchState == HIGH) {
      digitalWrite(GREEN,LOW);
      digitalWrite(RED1, LOW);
      digitalWrite(RED2, LOW);
  } 
  else 
  {
    digitalWrite(GREEN, HIGH);
    
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);

    delay(40); 
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    delay(40);
  }
}

