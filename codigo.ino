#include <EEPROM.h>

#define DoSensorPin  A1
#define VREF 5000
float doValue;
float temperature = 25;

#define RedLedPin 8
#define YellowLedPin 9
#define GreenLedPin 10
#define PotPin A0

void setup() {
    Serial.begin(115200);
    pinMode(DoSensorPin, INPUT);
    pinMode(RedLedPin, OUTPUT);
    pinMode(YellowLedPin, OUTPUT);
    pinMode(GreenLedPin, OUTPUT);
    pinMode(PotPin, INPUT);
    readDoCharacteristicValues();
}

void loop() {
    int potValue = analogRead(PotPin);  // Read the potentiometer
    int threshold = map(potValue, 0, 1023, 0, 300);  // Map the pot value to a range from 0 to 300

    // Reading and calculating the dissolved oxygen value
    int sensorValue = analogRead(DoSensorPin);
    float voltage = sensorValue * (VREF / 1024.0);
    doValue = calculateDo(voltage, temperature);

    // Controlling the LEDs based on the threshold
    if (doValue < threshold) {
        digitalWrite(RedLedPin, HIGH);
        digitalWrite(YellowLedPin, LOW);
        digitalWrite(GreenLedPin, LOW);
    } else if (doValue < threshold * 2) {
        digitalWrite(RedLedPin, LOW);
        digitalWrite(YellowLedPin, HIGH);
        digitalWrite(GreenLedPin, LOW);
    } else {
        digitalWrite(RedLedPin, LOW);
        digitalWrite(YellowLedPin, LOW);
        digitalWrite(GreenLedPin, HIGH);
    }

    delay(1000);  // Update every second
}

float calculateDo(float voltage, float temp) {
    // Dummy function to calculate dissolved oxygen based on voltage and temperature
    return voltage / 1000 * temp;
}

void readDoCharacteristicValues() {
    // Function to read calibration data from EEPROM, not fully implemented here
}
