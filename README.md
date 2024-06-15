
# Smart Home System

A brief description of what this project does and who it's for


## Project Overview
This project involves designing and implementing a comprehensive mobile-based smart home system that enhances the convenience, security, and energy efficiency of residential living spaces. The system enables up to 10 different users to remotely control LED lights and manage the safety of the entrance door using a mobile application. It incorporates smart lighting and air conditioning features that automatically adjust based on environmental conditions using light-dependent resistor (LDR) sensors for lighting control and LM35 sensors for temperature-based air conditioning management.
## Key Features
User Authentication: Secure access through unique usernames and passwords for each user. An alarm triggers if a wrong password is entered three times consecutively.

LED Light Control: Remote control of LED lights, including turning them on/off and adjusting brightness. Uses LDR sensors for automatic lighting adjustment based on ambient light.

Safety Door Management: Remote locking/unlocking of the safety door via the mobile application, enhancing home security.

Smart Air Conditioning: Intelligent management of air conditioning using LM35 temperature sensors to maintain optimal indoor temperatures and energy efficiency.

Multi-User Support: Supports up to 10 users, allowing multiple residents to control and monitor the smart home system.

## System Requirements

## Hardware Requirements
Core Microprocessor: ATmega32

Operating Voltage: 4.5-5.5V

Clock Speed: Up to 16 MHz

Flash Memory: 32 KB

SRAM: 2 KB

EEPROM: 1 KB

I/O Pins: 32 programmable I/O lines

Communication Interfaces: UART, SPI, and I2C

Timers: Three flexible Timer/Counters with compare modes

ADC: 10-bit ADC with up to 8 channels

PWM Channels: 4 PWM channels

## Additional Components
LED Lights

LDR Sensor (Light-Dependent Resistor)

LM35 Temperature Sensor

Servo Motor

Buzzer or Alarm System

DC Motor
## System Architecture
The system uses a layered architecture consisting of four layers:

HAL Layer: Handles hardware abstraction for components like DC motor, LED, LM35 sensor, and LDR sensor.

MCAL Layer: Manages microcontroller abstraction for DIO, GI, Timers, UART, and TWI.

Library Layer: Includes standard types and bit manipulation utilities.

Source Layer: Contains the main application logic.
