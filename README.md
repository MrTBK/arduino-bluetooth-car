# Arduino Bluetooth-Controlled Car

This repository provides all the required materials and instructions to build your very own **Arduino Bluetooth car**.

## Required Components

Here is the list of components you'll need for this project:

- **Arduino Uno**
- **Motor Driver**
- **4 DC Motors**
- **Bluetooth HC-05**
- **Car Chassis and Tyres**

## Wiring Diagram

The wiring diagram for this project is detailed as follows:

### Bluetooth to Arduino:

- TX to RX
- RX to TX
- Ground to Ground
- 3.3V to 3.3V

### Motor Driver to Arduino:
- Pin ENA to Pin 6
- Pin ENB to Pin 9
- Pin IN_1 to Pin 11
- Pin IN_2 to Pin 10
- Pin IN_3 to Pin 3
- Pin IN_4 to Pin 5
- 12V to Battery
- Ground to Battery Ground

## Usage Instructions

Here's how you can get the Arduino Bluetooth Car up and running:

1. Clone this repository to your local machine.
2. Open the `bluetooth.ino` file in the Arduino IDE. If you don't have Arduino IDE installed, you can download it from [here](https://www.arduino.cc/en/software).
3. Upload the code to your **Arduino Uno** board. Make sure the board is connected to your computer via a USB cable.
4. Once uploaded, disconnect the Arduino Uno from the computer and connect it to the battery.
5. Install the **Bluetooth RC Controller** app on your smartphone.
6. Pair your smartphone with the **Bluetooth HC-05** module via the Bluetooth settings of your phone.
7. Open the **Bluetooth RC Controller** app and start controlling your Arduino Bluetooth Car.

## App for Control

For controlling the car, you can use the **Bluetooth RC Controller** you can download it from [here](https://bluetooth-rc-car.fr.softonic.com/android).

---

Enjoy building and controlling your very own Arduino Bluetooth car! Let me know if you need further assistance or modifications.
