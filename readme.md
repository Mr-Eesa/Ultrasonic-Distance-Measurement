# Ultrasonic Distance Measurement with Arduino
This Arduino project utilizes an ultrasonic sensor to measure distance and displays the readings on a 16x2 LCD screen. Additionally, it includes a motor and buzzer for feedback based on the measured distance.

📂 Project Files
Main Code: distance_measurement.ino
📦 Dependencies
LiquidCrystal_I2C Library for controlling the I2C LCD display.
Wire Library for I2C communication.
🛠️ Components
Ultrasonic Sensor (HC-SR04)
16x2 LCD Screen
Motor (connected to Pin 10)
Buzzer (connected to Pin 6)
🔧 Setup
Connect the ultrasonic sensor's trig and echo pins to Pins 8 and 7, respectively.
Connect the motor to Pin 10 and the buzzer to Pin 6.
Attach the 16x2 LCD screen using the I2C interface (SDA, SCL) to pins A4 and A5 on the Arduino, respectively.
Upload the code to your Arduino board.
⚙️ Operation
The ultrasonic sensor calculates the distance using the time taken for the signal to bounce back.
Distance readings are displayed on the LCD screen.
The motor spins at different speeds based on the distance, providing visual feedback.
The buzzer produces a sound if an object is too close.
📝 Notes
Ensure all connections are secure and the libraries are properly installed.
Adjust the motor and buzzer behavior by modifying the code as needed.

