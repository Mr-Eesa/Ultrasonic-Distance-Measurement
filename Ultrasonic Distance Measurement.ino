#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Initializing a 16x2 LCD with I2C address 0x27

#define trig 8
#define echo 7
#define motor 10
#define buzzer 6

float distance;
long time;

void setup() {
  Serial.begin(9600);

  pinMode(motor, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.init();  // Initializing the LCD
  lcd.backlight();  // Turning on the backlight
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH);
  distance = time * 0.34 / 20;
  Serial.print(distance);
  Serial.println(" cm :3");
  delay(500);
  delay(1000);

  lcd.setCursor(0, 0);
  lcd.print("        ");  // Printing spaces to clear the LCD

  lcd.setCursor(0, 0);
  lcd.print(distance);  // Printing the distance on the LCD
  delay(300);

  lcd.setCursor(0, 1);
  lcd.print("bat-man");  // Printing "bat-man" on the second line of the LCD

  if (distance > 6) {
    analogWrite(motor, 90);  // Controlling the motor based on distance
  } else {
    analogWrite(motor, 190);
  }

  if (distance < 6) {
    digitalWrite(buzzer, HIGH);  // Activating the buzzer based on distance
    delay(300);
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(buzzer, LOW);
  }
}
