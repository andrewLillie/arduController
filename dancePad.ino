#include <Keyboard.h>


//Player 1 states
int upStatusFirstPlayer = 1;
int upStatusPrevFirstPlayer = 1;
int leftStatusFirstPlayer = 1;
int leftStatusPrevFirstPlayer = 1;
int rightStatusFirstPlayer = 1;
int rightStatusPrevFirstPlayer = 1;


//Player 2 states
int upStatusSecoundPlayer = 1;
int upStatusPrevSecoundPlayer = 1;
int leftStatusSecoundPlayer = 1;
int leftStatusPrevSecoundPlayer = 1;
int rightStatusSecoundPlayer = 1;
int rightStatusPrevSecoundPlayer = 1;

void setup() {
  //start keyboard event
  Keyboard.begin();

  //setup pins for input
  //use input_pullup for pullup resisit 
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  //Read player 1 and 2 inputs each frame
  upStatusFirstPlayer = digitalRead(2);
  leftStatusFirstPlayer = digitalRead(3);
  rightStatusFirstPlayer = digitalRead(4);

  upStatusSecoundPlayer = digitalRead(5);
  leftStatusSecoundPlayer = digitalRead(6);
  rightStatusSecoundPlayer = digitalRead(7);

  //checks to make sure curStatus is not the same as prev
  //if true and status is LOW then press the key and update prevStatus to on
  if (upStatusFirstPlayer != upStatusPrevFirstPlayer && upStatusFirstPlayer == LOW){
    Keyboard.press('w');
    upStatusPrevFirstPlayer = upStatusFirstPlayer;
  }
  //Same as above but checks for high voltage
  //releases the keypress, finishing the keystrokeand updating Prevstatus, resetting the button state to off
  if (upStatusFirstPlayer != upStatusPrevFirstPlayer && upStatusFirstPlayer == HIGH){
    Keyboard.release('w');
    upStatusPrevFirstPlayer = upStatusFirstPlayer;
  }
  if (leftStatusFirstPlayer != leftStatusPrevFirstPlayer && leftStatusFirstPlayer == LOW){
    Keyboard.press('a');
    leftStatusPrevFirstPlayer = leftStatusFirstPlayer;
  }
  if (leftStatusFirstPlayer != leftStatusPrevFirstPlayer && leftStatusFirstPlayer == HIGH){
    Keyboard.release('a');
    leftStatusPrevFirstPlayer = leftStatusFirstPlayer;
  }
  if (rightStatusFirstPlayer != rightStatusPrevFirstPlayer && rightStatusFirstPlayer == LOW){
    Keyboard.press('d');
    rightStatusPrevFirstPlayer = rightStatusFirstPlayer;
  }
  if (rightStatusFirstPlayer != rightStatusPrevFirstPlayer && rightStatusFirstPlayer == HIGH){
    Keyboard.release('d');
    rightStatusPrevFirstPlayer = rightStatusFirstPlayer;
  }
  
  if (upStatusSecoundPlayer != upStatusPrevSecoundPlayer && upStatusSecoundPlayer == LOW){
    Keyboard.press('w');
    upStatusPrevSecoundPlayer = upStatusSecoundPlayer;
  }
  if (upStatusSecoundPlayer != upStatusPrevSecoundPlayer && upStatusSecoundPlayer == HIGH){
    Keyboard.release('w');
    upStatusPrevSecoundPlayer = upStatusSecoundPlayer;
  }
  if (leftStatusSecoundPlayer != leftStatusPrevSecoundPlayer && leftStatusSecoundPlayer == LOW){
    Keyboard.press('a');
    leftStatusPrevSecoundPlayer = leftStatusSecoundPlayer;
  }
  if (leftStatusSecoundPlayer != leftStatusPrevSecoundPlayer && leftStatusSecoundPlayer == HIGH){
    Keyboard.release('a');
    leftStatusPrevSecoundPlayer = leftStatusSecoundPlayer;
  }
  if (rightStatusSecoundPlayer != rightStatusPrevSecoundPlayer && rightStatusSecoundPlayer == LOW){
    Keyboard.press('d');
    rightStatusPrevSecoundPlayer = rightStatusSecoundPlayer;
  }
  if (rightStatusSecoundPlayer != rightStatusPrevSecoundPlayer && rightStatusSecoundPlayer == HIGH){
    Keyboard.release('d');
    rightStatusPrevSecoundPlayer = rightStatusSecoundPlayer;
  }
  
}
