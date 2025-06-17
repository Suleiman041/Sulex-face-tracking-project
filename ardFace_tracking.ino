#include <ESP32Servo.h>

Servo leftRight;  // Servo for left-right movement
Servo upDown;     // Servo for up-down movement

void setup() {
  leftRight.attach(26);   // Connect to pin 26
  upDown.attach(25);      // Connect to pin 25
  Serial.begin(9600);    // Start serial communication
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\r');  // Read input until carriage return
    Serial.println(data);                        // Echo the received data

    // Split the input into x and y using comma
    int comma = data.indexOf(',');
    int xRaw = data.substring(0, comma).toInt();
    int yRaw = data.substring(comma + 1).toInt();

    // Convert screen coords to servo angles
    int x = map(xRaw, 0, 1920, 180, 0);  // Flip direction
    int y = map(yRaw, 0, 1080, 180, 0);

    leftRight.write(x);  // Move servo horizontally
    upDown.write(y);     // Move servo vertically

    // Debug info
    Serial.print("X Angle: "); Serial.println(x);
    Serial.print("Y Angle: "); Serial.println(y);
  }
}
