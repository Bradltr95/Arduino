/* Created by Bradley Latreille */ 
// initialize all of our LED pins 
int lYellowPin = 7; 
int lBluePin = 8; 
int lWhitePin = 9; 
int RedPin = 10; 
int rYellowPin = 11; 
int rBluePin = 12; 
int rWhitePin = 13; 

// initialize the button pin 
int buttonPin = 2; 

// initialize the button's state
int buttonState = 0;  

// initialize the game state 
bool gamestate = true; 

void setup() {
  pinMode(lYellowPin , OUTPUT); 
  pinMode(lBluePin , OUTPUT);
  pinMode(lWhitePin , OUTPUT);
  pinMode(RedPin , OUTPUT);
  pinMode(rWhitePin , OUTPUT);
  pinMode(rBluePin , OUTPUT);
  pinMode(rYellowPin , OUTPUT);

  pinMode(buttonPin, INPUT); 
}

void loop() {
while(gamestate) {
  digitalWrite(lYellowPin, HIGH);
  delay(50); 
  digitalWrite(lYellowPin, LOW);   
  delay(50); 
  
  digitalWrite(lBluePin, HIGH);
  delay(50); 
  digitalWrite(lBluePin, LOW);
  delay(50); 
  
  digitalWrite(lWhitePin, HIGH);
  delay(50); 
  digitalWrite(lWhitePin, LOW);
  delay(50); 

  digitalWrite(RedPin, HIGH);
  
  buttonState = digitalRead(buttonPin); 

  if(buttonState == HIGH) {
    win(); 
    gamestate = false; 
  }
  
  delay(50); 
  digitalWrite(RedPin, LOW);
  delay(50); 

  digitalWrite(rYellowPin, HIGH);
  delay(50); 
  digitalWrite(rYellowPin, LOW);   
  delay(50); 

  digitalWrite(rBluePin, HIGH);
  delay(50); 
  digitalWrite(rBluePin, LOW);
  delay(50); 
  
  digitalWrite(rWhitePin, HIGH);
  delay(50); 
  digitalWrite(rWhitePin, LOW);
  delay(50); 
}
}

void win() {
  digitalWrite(lYellowPin, HIGH);
  digitalWrite(lBluePin, HIGH);
  digitalWrite(lWhitePin, HIGH);
  digitalWrite(RedPin, HIGH);
  digitalWrite(rYellowPin, HIGH);
  digitalWrite(rBluePin, HIGH);
  digitalWrite(rWhitePin, HIGH);

  delay(250); 

  digitalWrite(lYellowPin, LOW);
  digitalWrite(lBluePin, LOW);
  digitalWrite(lWhitePin, LOW);
  digitalWrite(RedPin, LOW);
  digitalWrite(rYellowPin, LOW);
  digitalWrite(rBluePin, LOW);
  digitalWrite(rWhitePin, LOW); 

  delay(250); 

   digitalWrite(lYellowPin, HIGH);
  digitalWrite(lBluePin, HIGH);
  digitalWrite(lWhitePin, HIGH);
  digitalWrite(RedPin, HIGH);
  digitalWrite(rYellowPin, HIGH);
  digitalWrite(rBluePin, HIGH);
  digitalWrite(rWhitePin, HIGH);

  delay(250); 

  digitalWrite(lYellowPin, LOW);
  digitalWrite(lBluePin, LOW);
  digitalWrite(lWhitePin, LOW);
  digitalWrite(RedPin, LOW);
  digitalWrite(rYellowPin, LOW);
  digitalWrite(rBluePin, LOW);
  digitalWrite(rWhitePin, LOW); 

  delay(250);

   digitalWrite(lYellowPin, HIGH);
  digitalWrite(lBluePin, HIGH);
  digitalWrite(lWhitePin, HIGH);
  digitalWrite(RedPin, HIGH);
  digitalWrite(rYellowPin, HIGH);
  digitalWrite(rBluePin, HIGH);
  digitalWrite(rWhitePin, HIGH);

  delay(250); 

  digitalWrite(lYellowPin, LOW);
  digitalWrite(lBluePin, LOW);
  digitalWrite(lWhitePin, LOW);
  digitalWrite(RedPin, LOW);
  digitalWrite(rYellowPin, LOW);
  digitalWrite(rBluePin, LOW);
  digitalWrite(rWhitePin, LOW); 

  delay(250);

   digitalWrite(lYellowPin, HIGH);
  digitalWrite(lBluePin, HIGH);
  digitalWrite(lWhitePin, HIGH);
  digitalWrite(RedPin, HIGH);
  digitalWrite(rYellowPin, HIGH);
  digitalWrite(rBluePin, HIGH);
  digitalWrite(rWhitePin, HIGH);

  delay(250); 

  digitalWrite(lYellowPin, LOW);
  digitalWrite(lBluePin, LOW);
  digitalWrite(lWhitePin, LOW);
  digitalWrite(RedPin, LOW);
  digitalWrite(rYellowPin, LOW);
  digitalWrite(rBluePin, LOW);
  digitalWrite(rWhitePin, LOW); 

  delay(250);
}
