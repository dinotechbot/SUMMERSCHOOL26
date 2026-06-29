# LED Blink using Arduino

## Project Title

**LED Blink using Arduino**

## Project Overview

This project demonstrates the basic operation of an LED using an Arduino board. The Arduino is programmed to blink an LED at regular intervals by repeatedly turning it ON and OFF. It is one of the fundamental beginner projects for learning Arduino programming and digital output control.



## Hardware Required

* Arduino Uno (or compatible board)
* 1 × LED
* 1 × 220Ω Resistor
* Breadboard
* Jumper Wires
* USB Cable
* Computer with Arduino IDE installed

## Circuit Diagram Description (Text-Based)

1. Connect the **long leg (anode)** of the LED to **Digital Pin 13** of the Arduino through a **220Ω resistor**.
2. Connect the **short leg (cathode)** of the LED to the **GND (Ground)** pin of the Arduino.
3. Connect the Arduino to the computer using a USB cable.

**Connection Summary:**

```
Arduino Pin 13
      |
   220Ω Resistor
      |
     LED (+)
     LED (-)
      |
     GND
```

---

## How to Upload the Code

1. Connect the Arduino board to your computer using a USB cable.
2. Open the **Arduino IDE**.
3. Open the `led_blink.ino` sketch.
4. Select the correct board:

   * Go to **Tools → Board → Arduino Uno** (or your board model).
5. Select the correct COM Port:

   * Go to **Tools → Port** and choose the connected Arduino port.
6. Click the **Verify (✓)** button to compile the code.
7. Click the **Upload (→)** button.
8. Wait until the message **"Done Uploading"** appears.
9. Observe the LED blinking on the Arduino board or the external LED.

---

## Expected Output

* The LED connected to Digital Pin 13 will:

  * Turn **ON** for one second.
  * Turn **OFF** for one second.
* This cycle will continue repeatedly until the Arduino is powered off or reset.

---

## Troubleshooting Tips

1. Ensure the correct **Board** and **COM Port** are selected in the Arduino IDE.
2. Verify that the LED polarity is correct:

   * Long leg → Arduino Pin 13 (through resistor)
   * Short leg → GND
3. Make sure the **220Ω resistor** is connected in series with the LED.
4. Check that the USB cable supports both **power and data transfer** (some cables provide power only).
5. If the upload fails, press the **Reset** button on the Arduino and try uploading again.
6. Verify all jumper wire connections are secure and correctly placed.

---

## Conclusion

The LED Blink project introduces the fundamentals of Arduino programming, digital output, and hardware interfacing. It serves as the foundation for more advanced embedded systems and IoT projects involving sensors, actuators, and automation.
