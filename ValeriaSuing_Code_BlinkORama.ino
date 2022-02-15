/*
  Valeria Suing (3182717)
  Blink O Rama
  Controlling fairy lights in a garment with different buttons 
*/

// setting pin numbers
const int ledPin =  1;        // fairy lights A7
const int buttonPin1 = 2;     // the number of the button pin A5
const int buttonPin2 = 6;     // the number of the button pin A1   
const int buttonPin3 = 3;     // the number of the button pin A4

// variables will change:
int buttonState1 = 0;         // variable for reading the button1 status
int buttonState2 = 0;         // variable for reading the button2 status
int buttonState3 = 0;         // variable for reading the button3 status

void setup() {
  // initialize the LEDs pin as an output:
  pinMode(ledPin, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  // read the state of the button value as digital:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3); 

  // if buttoned up 
  if (buttonState1 == HIGH) {
    // Turn on LEDs
    digitalWrite(ledPin, HIGH);
  } 
  
  //if button is pressed 
   if (buttonState2 == HIGH) {
    //turn off LEDs
    digitalWrite(ledPin, LOW);
  } 

  if (buttonState3 == HIGH) {
    // make lights flash
    digitalWrite(ledPin, HIGH);
    delay(120);
    digitalWrite(ledPin, LOW);
    delay(120);
    
  } 
  

}
