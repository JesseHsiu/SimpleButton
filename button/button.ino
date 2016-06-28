// constants won't change. They're used here to
// set pin numbers:
const int buttonPin2 = 2;     // the number of the pushbutton pin
const int buttonPin3 = 3;     // the number of the pushbutton pin
const int buttonPin4 = 4;     // the number of the pushbutton pin

// variables will change:
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);

  Serial.print(buttonState2);
  Serial.print(" ");
  Serial.print(buttonState3);
  Serial.print(" ");
  Serial.println(buttonState4);
}