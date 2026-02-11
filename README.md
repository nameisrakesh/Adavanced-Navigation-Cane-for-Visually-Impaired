# ADVANCED-NAVIGATION-CANE-FOR-VISUALLY-IMPAIRED

Mini Project – Embedded Systems (ECE)

---

## Overview

The Advanced Navigation Cane for Visually Impaired is an embedded assistive device designed to improve mobility and safety for visually impaired individuals. Traditional walking canes provide only tactile feedback, which limits early obstacle awareness.

This project integrates an AT89S52 (8051) microcontroller with IR sensors, GPS, GSM, LCD, and buzzer to provide:

- Real-time obstacle detection  
- Emergency alert messaging  
- Location tracking  
- Audio alerts  

The system offers a low-cost and portable solution that enhances independent navigation in both indoor and outdoor environments.

---

## Objectives

- Detect obstacles using IR sensors and alert the user through a buzzer  
- Track real-time location using GPS  
- Send emergency SMS alerts via GSM to predefined guardians  
- Display system status on a 16x2 LCD  
- Provide a compact and affordable embedded solution  

---

## Features

- IR-based obstacle detection  
- Emergency push-button alert system  
- GSM-based SMS communication  
- GPS location tracking  
- 16x2 LCD status display  
- AT89S52 (8051) microcontroller control  
- Regulated 5V power supply  
- Lightweight and portable design  

---

## System Components

### Hardware

- AT89S52 (8051 Microcontroller)  
- IR Sensor  
- GPS Module  
- GSM Module  
- 16x2 LCD Display  
- Buzzer  
- Emergency Push Button  
- Crystal Oscillator  
- Transformer + Bridge Rectifier  
- 7805 Voltage Regulator  

### Software

- Keil µVision (Embedded C / Assembly)  
- Proteus (Simulation – Optional)

---

## Working Principle

### Obstacle Detection
The IR sensor continuously scans the path ahead. When an obstacle is detected, the microcontroller activates the buzzer to warn the user.

### GPS Tracking
The GPS module provides latitude and longitude data, enabling location identification during emergencies.

### Emergency Communication
When the emergency button is pressed, the GSM module sends an alert SMS to predefined guardian numbers.

### Central Control
The AT89S52 microcontroller processes sensor inputs and controls the LCD, buzzer, GPS, and GSM modules.

---

## Block Diagram

Power Supply → AT89S52 Microcontroller → IR Sensor / GPS / GSM / LCD / Buzzer / Emergency Button

---

## Folder Structure


---

## Applications

- Assistive navigation for visually impaired individuals  
- Embedded systems education  
- Safety alert systems  
- GPS + GSM based tracking projects  

---

## Conclusion

This project demonstrates how embedded systems can significantly enhance accessibility for visually impaired users. By combining obstacle detection, GPS tracking, and GSM communication, the navigation cane provides a reliable and cost-effective mobility solution.

The design also serves as a practical learning platform for integrating sensors, microcontrollers, and wireless communication in real-world applications.

---

## Authors

Bhanavath Rakesh  
Banoth Varun  
Bhukya Rohith Kumar  

Department of Electronics and Communication Engineering  
Guru Nanak Institutions Technical Campus  

---

## Contact

Email: bhanavathrakesh12345@gmail.com

---

## Future Enhancements

- Replace IR with ultrasonic sensors for longer range  
- Add voice feedback module  
- Rechargeable battery integration  
- Mobile application for live tracking  

