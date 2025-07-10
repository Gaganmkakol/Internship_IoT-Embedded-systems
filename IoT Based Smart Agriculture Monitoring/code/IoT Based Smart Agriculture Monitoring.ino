#define BLYNK_TEMPLATE_ID "TMPL3-4Lyl_yu"
#define BLYNK_TEMPLATE_NAME "IoT Based Smart Agriculture Monitoring"
#define BLYNK_AUTH_TOKEN "qKEqVt1q-ZtKX519NW2boNYFbDq1bm31"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

// Replace these with your Wi-Fi credentials
char auth[] = "qKEqVt1q-ZtKX519NW2boNYFbDq1bm31";
char ssid[] = "TP-Link_4D9C";       // <-- Your WiFi SSID
char pass[] = "M@nd!r@m@1942";   // <-- Your WiFi password

#define DHTPIN 2         // GPIO2 on NodeMCU
#define DHTTYPE DHT11     // Sensor type DHT11
DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;

void sendSensorData() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int soil = analogRead(A0);  // Soil sensor on A0

  // Convert raw soil value (0-1023) to % moisture (rough scale)
  int soilPercent = map(soil, 1023, 0, 0, 100);  // 100 = Wet, 0 = Dry

  // Send values to Blynk virtual pins
  Blynk.virtualWrite(V0, temp);         // Temperature
  Blynk.virtualWrite(V1, hum);          // Humidity
  Blynk.virtualWrite(V2, soilPercent);  // Soil moisture

  // For debugging via serial monitor
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C, Humidity: ");
  Serial.print(hum);
  Serial.print(" %, Soil: ");
  Serial.print(soilPercent);
  Serial.println(" %");
}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(2000L, sendSensorData); // Run every 2 seconds
}

void loop() {
  Blynk.run();
  timer.run();
}
