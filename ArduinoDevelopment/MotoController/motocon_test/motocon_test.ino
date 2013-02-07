// zoomkat 10-4-10 serial servo test
// type servo position 0 to 180 in serial monitor
// for writeMicroseconds, use a value like 1500
// for IDE 0019 and later
// Powering a servo from the arduino usually DOES NOT WORK.

String readString;
#include <Servo.h> 
Servo myservo;  // create servo object to control a servo 

#define FORWARD 500
#define STOP 1500
#define BACKWARD 2000


void setup() {
  Serial.begin(9600);
  myservo.writeMicroseconds(STOP); //set initial servo position if desired
  myservo.attach(7);  //the pin for the servo control 
  Serial.println("servo-test-21"); // so I can keep track of what is loaded
}

void loop() {

  while (Serial.available()) {
    delay(1);  
    if (Serial.available() >0) {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //makes the string readString
    } 
  }

  if (readString.length() >0) {
    Serial.println(readString);  //so you can see the captured string 
    int n;
    char carray[6]; //converting string to number
    readString.toCharArray(carray, sizeof(carray));
    n = atoi(carray); 
    myservo.writeMicroseconds(n); // for microseconds    1500 for stop 2000 for back 500 for forward
    //myservo.write(n); //for degees 0-180
    readString="";
  } 
}

