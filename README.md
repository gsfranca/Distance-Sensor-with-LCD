# :car: Distance Sensor with LCD
Group work to create a wall distance sensor for a car

<img src="/img/Sensor-de-Distancia-com LCD.png" height="400"></img>
<br><br>
## :computer: Access this project on the Tinkercad website.
https://www.tinkercad.com/things/6BwnN59bCeH-sensor-de-distancia-com-lcd
<br><br>
## :family: Made By
* [Ana Luisa](https://github.com/AnaLuisaAugusto)
* [Erick](https://github.com/RPSIOErick)
* [Giovana](https://github.com/gsfranca)
* Andrei Luiz
<br><br>
## :closed_book: About this project
Project created in 2022 as an activity to the Embedded Systems subject, a distance sensor made to work in a toy car (not electric). The project was done online version with the [Tinkercad](https://www.tinkercad.com/) tool and in a physical version using an Arduino Kit.

It was used:
* 1 Arduino Uno R3
* 1 Protoboard (830 Tie points)
* 2 LEDs (Green and Red)
* 5 resistors (4 of 150 Ω and 1 of 160 Ω)
* 1 Piezo
* 1 LCD 16x2
* 1 HC-SR04 ultrasonic sensor

The sensor measures the distance between the car and an object nearby (like a wall):
* If it is a "safe distance" (higher than 15cm) the green LED will be on and the distance will be displayed on LCD.
* If it is not a safe distance (Lower than 15cm), the red LED will on (offing the green one), and the distance will be displayed on LCD with a warning saying "CUIDADO" (CAUTION), the Piezo will also start sounding.
<br><br>
## ⚙️ How to test in tinkercad
You need to have an account on Tinkercad to access this project, you can do it on the official website. [Access here.](https://www.tinkercad.com/join) 
### • 1st Step: Open the link in the section " :computer: Acess this project on the Tinkercad website."
### • 2nd Step: Create a copy of the project.
### • 3rd Step: Click on "Start Simulation".
### • 4th Step: Click on the gray button on the ultrasonic sensor.
<img src="/img/gray-btn.png" height="200" />

### • 5th Step: Move the blue circle in the green area, they represent, respectively, the reference object and the sensor operating area.
<img src="/img/blue-cicle_green-area.png" height="400" />
