#include <Servo.h>

Servo servo1, servo2, servo3,servo4, servo5;

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  Serial.begin(9600);
  Serial.setTimeout(1);
}

void loop() {
  while (!Serial.available());
  delay(300); 
  String x1 = Serial.readStringUntil('\n');
  int s1 = x1.substring(0,3).toInt();
  int s2 = x1.substring(3,6).toInt();
  int s3 = x1.substring(6,9).toInt();
  int s4 = x1.substring(9,12).toInt();
  int s5 = x1.substring(12,15).toInt();
  Serial.print(s1);   
  servo1.write(s1);
  servo2.write(s2);
  servo3.write(s3);
  servo4.write(s4);
  servo5.write(s5);
  
}
