# 🌦 WeatherVision – ESP32 IoT Weather Station

WeatherVision is a modern IoT weather monitoring system built using the **ESP32**, **DHT11 Temperature & Humidity Sensor**, and the **Open-Meteo API**. It combines real-time environmental data from a local sensor with live online weather information and presents it through a clean, responsive web dashboard.

---

## 📖 Overview

The project demonstrates how embedded systems can communicate with cloud services to create an interactive weather monitoring solution. The ESP32 collects local temperature and humidity readings from the DHT11 sensor while simultaneously retrieving current weather information from the Open-Meteo API over Wi-Fi.

The collected data can be viewed on the Serial Monitor and through a modern web dashboard, making it suitable for IoT learning, smart home applications, and environmental monitoring projects.

---

## ✨ Features

- 🌡 Real-time temperature monitoring using DHT11
- 💧 Real-time humidity monitoring
- ☁ Fetches live weather data using the Open-Meteo API
- 📡 Wi-Fi connectivity with ESP32
- 🌍 Displays weather information for a selected location
- 📊 Modern responsive web dashboard
- 🔄 Automatic data refresh
- 🖥 Live monitoring through Serial Monitor
- 📱 Mobile-friendly dashboard design

---

## 🛠 Hardware Required

| Component | Quantity |
|-----------|---------:|
| ESP32 Dev Module | 1 |
| DHT11 Temperature & Humidity Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

## 💻 Software & Technologies

- Arduino IDE
- ESP32 Board Package
- C++
- HTML5
- CSS3
- JavaScript
- Wi-Fi Library
- HTTPClient Library
- ArduinoJson
- Open-Meteo API

---

## ⚙ Circuit Connections

| DHT11 | ESP32 |
|--------|--------|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 27 |

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/WeatherVision.git
```

### 2. Open the Arduino Code

Open the ESP32 weather station sketch in Arduino IDE.

### 3. Install Required Libraries

Install the following libraries using the Arduino Library Manager:

- DHT Sensor Library
- ArduinoJson
- WiFi (ESP32)
- HTTPClient

### 4. Configure Wi-Fi

Update your Wi-Fi credentials in the code.

```cpp
const char* ssid = "Your_WiFi_Name";
const char* password = "Your_WiFi_Password";
```

### 5. Upload the Code

- Select **ESP32 Dev Module**
- Select the correct COM Port
- Upload the sketch

### 6. Open Serial Monitor

Set the baud rate to:

```
115200
```

---

## 🌐 Open-Meteo API

WeatherVision uses the free Open-Meteo API to fetch live weather information.

Example request:

```
https://api.open-meteo.com/v1/forecast?latitude=28.6519&longitude=77.2315&current=temperature_2m,relative_humidity_2m
```

No API key is required.

---

## 📷 Sample Output

```
WiFi Connected!

Location : New Delhi

Sensor Data
Temperature : 30.2 °C
Humidity    : 71 %

Online Weather
Temperature : 31.5 °C
Humidity    : 68 %
```

---

## 🌍 Applications

- Smart Weather Station
- Environmental Monitoring
- Smart Agriculture
- Greenhouse Monitoring
- Warehouse Monitoring
- Home Automation
- Educational IoT Projects

---

## 📈 Future Improvements

- Cloud data logging (Firebase / Google Sheets)
- ThingSpeak integration
- Interactive weather charts
- Historical data storage
- Mobile application
- Email and SMS alerts
- OLED/LCD display support
- Additional sensors (BMP280, BME280, MQ-series)

---

## 🤝 Contributing

Contributions are welcome!

If you'd like to improve this project:

1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Open a Pull Request

---

## 📜 License

This project is released under the **MIT License**.

---

## 👨‍💻 Author

**Sayan Biswas**

If you found this project useful, consider giving it a ⭐ on GitHub!

---

### ⭐ If you like this project, don't forget to star the repository!
