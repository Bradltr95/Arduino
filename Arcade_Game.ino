/* Created by Bradley Latreille */ 
// initialize all of our LED pins 
int lYellowPin = 7; 
int lBluePin = 8; 
int lWhitePin = 9; 
int RedPin = 10; 
int rYellowPin = 11; 
int rBluePin = 12; 
int rWhitePin = 13; 

// flciker speed (ms) 
int gameLevel = 25; 

// initialize the button pin 
int buttonPin = 2;
int buttonLevelPin = 4;  

// initialize the reset pin 
int resetPin = 3; 

// initialize the button's state
int buttonState = 0;  
int buttonLevelState = 0; 
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
  
  pinMode(resetPin, INPUT); 
  pinMode(buttonPin, INPUT); 
  pinMode(buttonLevelPin, INPUT); 
}

void loop() {
while(gamestate) {
  for(int i = 7; i <=13; i++) {
    digitalWrite(i, HIGH);

    buttonLevelState = digitalRead(buttonLevelPin); 
    buttonState = digitalRead(buttonPin); 

    if(i==10) { 
      if(buttonState == HIGH) {
        win(); 
        //gamestate = false; 
        digitalRead(resetPin);
      }
    }

    if(buttonLevelState == 1){
      gameLevel = 25; 
    }else{
      gameLevel = 40; 
    }
    
    delay(gameLevel); 
    digitalWrite(i, LOW);   
    delay(gameLevel);
  }
}
}

void win() {
 for(int i = 0; i < 4; i++) {
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
}
