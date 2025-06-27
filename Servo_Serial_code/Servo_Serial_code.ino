#include <Servo.h>
Servo myservo1;
Servo myservo2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
myservo1.attach(3);
myservo2.attach(9);
myservo1.write(0);
myservo2.write(0);

}


void loop() {
  if (Serial.available() > 0) { // Check if data is available to read
    char receivedChar = Serial.read(); // Read the incoming byte
    
    if (receivedChar == '1') {
      // Move the servo to position for '1'
      myservo1.write(180);
      myservo2.write(0);
       // Adjust the angle as per your servo requirements
      delay(5000);
      myservo1.write(0);
 // Delay for stability
    } else if (receivedChar == '2') {
      // Move the servo to position for '0'
      myservo1.write(0);
      myservo2.write(180);
       // Adjust the angle as per your servo requirements
      delay(5000);
      myservo2.write(0);

       // Delay for stability
    }
  }
}
