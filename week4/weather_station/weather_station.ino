#include <WiFi.h>
#include "DHT.h"
#include <ArduinoJson.h>
#include <HTTPClient.h>
const char* ssid="Sayan's S24 Ultra";
const char* password="hotspotkapassword";
#define DHTPIN 27
#define DHTTYPE DHT11      
DHT dht(DHTPIN, DHTTYPE);
WiFiClient client;
void setup(){
  Serial.begin(115200);
  dht.begin();
  WiFi.begin(ssid,password);
  Serial.print("Connecting");
  while (WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("WiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

}
void loop(){
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  if (isnan(temperature) || isnan(humidity)){
    Serial.println("Failed to read DHT sensor!");
    delay(2000);
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  HTTPClient http;
    String url="https://api.open-meteo.com/v1/forecast?latitude=28.6519&longitude=77.2315&current=temperature_2m,relative_humidity_2m";
    http.begin(url);
    int httpResponseCode = http.GET();
    String payload = http.getString();
    if(httpResponseCode>0){
      DynamicJsonDocument doc(2048);
      deserializeJson(doc, payload);
      float temp = doc["current"]["temperature_2m"];
      int humidity = doc["current"]["relative_humidity_2m"];
      String location = doc["timezone"];
      Serial.println("----------------------");
      Serial.print("Location : ");
      Serial.println(location);
      Serial.print("Temperature : ");
      Serial.print(temp);
      Serial.println(" °C");
      Serial.print("Humidity    : ");
      Serial.print(humidity);
      Serial.println(" %");
      Serial.println("----------------------");
    }
    http.end();
  delay(20000);
}
