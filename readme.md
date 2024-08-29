
# Pi Pico Serial communication
This repository holds c code for a raspberry pi pico, a microcontroller for sending and receiving serial communication over usb. Flash the pi pico and it will print "hello world" over the usb serial interface. It will print the received buffer after "end" is received over the same serial port. 

This is useful for automating hardware components as the pi pico is very good at interfacing with electronics. You can easily create a python program to send messages to the pi pico using the 'pyserial' library .

&nbsp;

<div align="center"><img src="docs/preview.gif" width="800" alt="Preview of the robotics engineering project"></div>

&nbsp;

## Hardware Dependencies
1. Pi Pico
2. Host computer

## Usage
1. Clone this repository
```
git clone ...
```
2. Navigate to the project directory
3. Build the project using CMake
4. Connect the Raspberry Pi Pico to your computer via USB
5. Flash the compiled program to the Raspberry Pi Pico
6. Open a serial terminal on your computer (e.g., VScode serial plugin) and connect to the Raspberry Pi Pico at the specified baud rate (e.g., 115200)
7. The program will start running, and you should see "Hello, world!" messages printed every second
8. To interact with the program, type input into the serial terminal. The program will check for the "end" string and print the received input up to that point

&nbsp;

## Repository Structure
```
pi-pico-serial/
├── CMakeLists.txt # CMake configuration file for building the project
├── build/ # Directory for build artifacts
├── docs/ # Documentation and related files
├── hello_serial.c # Source code for the serial communication example
├── pico_sdk_import.cmake # CMake script to import the Pico SDK
└── readme.md # Project description and instructions
```

&nbsp;

## Topics 
```
## Topics 
```
C | USB | Serial Communication | Raspberry Pi Pico 
Baud Rate | Input Handling | Embedded Systems | Microcontroller 
UART | stdio | Optimization | Memory Efficiency
```
```
&nbsp;

<hr>

&nbsp;

<div align="center">



╭━━╮╭━━━┳━━┳━━━┳━╮╱╭╮        ╭╮╱╱╭━━━┳━━━┳╮╭━┳━━━╮
┃╭╮┃┃╭━╮┣┫┣┫╭━╮┃┃╰╮┃┃        ┃┃╱╱┃╭━━┫╭━╮┃┃┃╭┫╭━╮┃
┃╰╯╰┫╰━╯┃┃┃┃┃╱┃┃╭╮╰╯┃        ┃┃╱╱┃╰━━┫╰━━┫╰╯╯┃┃╱┃┃
┃╭━╮┃╭╮╭╯┃┃┃╰━╯┃┃╰╮┃┃        ┃┃╱╭┫╭━━┻━━╮┃╭╮┃┃┃╱┃┃
┃╰━╯┃┃┃╰┳┫┣┫╭━╮┃┃╱┃┃┃        ┃╰━╯┃╰━━┫╰━╯┃┃┃╰┫╰━╯┃
╰━━━┻╯╰━┻━━┻╯╱╰┻╯╱╰━╯        ╰━━━┻━━━┻━━━┻╯╰━┻━━━╯
  


&nbsp;


<a href="https://twitter.com/BrianJosephLeko"><img src="https://raw.githubusercontent.com/BrianLesko/BrianLesko/main/.socials/svg-grey/x.svg" width="30" alt="X Logo"></a> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://github.com/BrianLesko"><img src="https://github.com/BrianLesko/BrianLesko/blob/main/.socials/svg-grey/github.svg" width="30" alt="GitHub"></a> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://www.linkedin.com/in/brianlesko/"><img src="https://raw.githubusercontent.com/BrianLesko/BrianLesko/main/.socials/svg-grey/linkedin.svg" width="30" alt="LinkedIn"></a>

follow all of these for pizza :)

</div>


&nbsp;


