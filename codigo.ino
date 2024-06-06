// Pins
#define DO_SENSOR_PIN A0
#define RED_LED_PIN 9
#define GREEN_LED_PIN 10

// Constantes para oxigenio dissolvido em mg/L
const float IDEAL_MIN_OXYGEN = 4.5;
const float IDEAL_MAX_OXYGEN = 5.5;

// Variavel do sensor
float sensorValue = 0;

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  // Leitura do sensor
  sensorValue = analogRead(DO_SENSOR_PIN);
  // LEDs
  if (sensorValue < IDEAL_MIN_OXYGEN || sensorValue > IDEAL_MAX_OXYGEN) {
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
  } else {
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, HIGH);
  }

  // Delay
  delay(1000);
}
