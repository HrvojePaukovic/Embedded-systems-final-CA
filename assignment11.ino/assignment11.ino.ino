const int inputPin = 1;     // D1
const int outputPin1 = 3;   // D3
const int outputPin2 = 4;   // D4
int my_flag = 0;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);

  digitalWrite(outputPin1, LOW);
  digitalWrite(outputPin2, LOW);
}

void loop() {
  if (digitalRead(inputPin) == LOW) {
    if (my_flag == 0) {
      my_flag = 1;

      // Toggle outputs
      digitalWrite(outputPin1, !digitalRead(outputPin1));
      digitalWrite(outputPin2, !digitalRead(outputPin2));

      my_flag = 0;
    }
  }
}
