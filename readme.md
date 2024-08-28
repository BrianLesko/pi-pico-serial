
# Template Repository
Set up a great looking readme.md quickly using [this repository].

&nbsp;

<div align="center"><img src="docs/preview.gif" width="800" alt="Preview of the robotics engineering project"></div>

&nbsp;

## Software Dependencies

This code uses the following libraries:
- `streamlit`: for building the user interface.
- `numpy`: for creating arrays.
- `matplotlib`: for plotting the stepper motor visualization
- `hidapi`: for accessing usb connections on the host device

&nbsp;

## Hardware Dependencies
1. A base station computer
2. A second computer for the robot
3. A PWM capable arduino + cable + servo motors and BLDC Motor controller
4. A PS5 remote + cable

## Usage
1. clone this repository
```
git clone ...
```
2. The base station and robot computers must be on the same network. Set up each device with a static IP
2. Change the robot IP in 'app.py' and 'car.py' you can also change the port which is '12345'
3. Change the PS5 remote vendorID and productID in 'app.py'
4. Plug the arduino into the robot
5. Run the arduino sketch.ino file on your arduino
6. Run the car.py file on your robot 
```
python car.py
```
7. plug the PS5 remote into the base station
8. run the streamlit app with the following command in your base station terminal
```
streamlit run app.py
```

This will start the local Streamlit server, and you can access the interface by opening a web browser and navigating to `http://localhost:8501`.

&nbsp;

## Repository Structure
```
repository/
├── app.py # The base station UI to send the Internet commands to the robot
├── customize_gui # class for adding gui elements
├── dualsense.py # The class used to decode received bytes from the wired controller
├── ethernet.py # a helper class for sending Internet IP communciation
├── car.py # Recieves the internet commands and relays them to the arduino
├── sketch.ino # the arduino code to control the motors
├── requirements.txt # the python packages needed to run locally
├── .gitignore # includes the local virtual environment named my_env
└── docs/
    └── preview.png # preview photo for Github
```

&nbsp;

## Topics 
```
Python | Low Code UI | Mobile robot | Internet IP 
HIDapi | decode bytes | PS5 | Sony | Dualsense | external device | communication 
Mechanical and Robotics engineer
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


