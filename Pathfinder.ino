// Pin definitions
//Assigns button variables
int button2 = D1;
int button3 = D2;
int button4 = D3;

//Assigns LED variables
int LED1 = D4;
int LED2 = D5;
int LED3 = D6;
int LED4 = D10;


// the setup function runs once when you press reset or power the board
void setup() {
//Set buttons as inputs 
//Keeps pin high when unpressed
pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(button3, INPUT_PULLUP);
pinMode(button4, INPUT_PULLUP);

//Set LEDs as outputs
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
}

//Loop function to always check for this
void loop() {
  
//Switch 1
//If switch 1 is pressed it reads low, then turn led on. If not then keep LED off
if (digitalRead(Button1) == LOW) {
  digitalWrite(LED1, HIGH);
} else {
  digitalWrite(LED1, LOW);
}

//Switch 2
if (digitalRead(Button2) == LOW) {
  digitalWrite(LED2, HIGH);
} else {
  digitalWrite(LED2, LOW);
}

//Switch 3
if (digitalRead(Button3) == LOW) {
  digitalWrite(LED3, HIGH);
} else {
  digitalWrite(LED3, LOW);
}

//Switch 4
if (digitalRead(Button4) == LOW) {
  digitalWrite(LED4, HIGH);
} else {
  digitalWrite(LED4, LOW);
}

}