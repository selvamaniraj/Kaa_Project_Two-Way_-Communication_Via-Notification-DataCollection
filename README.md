# Kaa_Project_Two-Way_-Communication_Via-Notification-DataCollection

 ----Two way communication program---------
 
	1.kaa - To - RPi
	2.Rpi - TO -  kaa

This program can be run from  -/home/pi/

if you want to change the Directory then you must change all the directories 
that are used in the programs 



This  program can be used to collect the data from RPi 

--------------------DataCollection------------------------------------
The program collects the button count and button status of the machine 
The program named as button .c 
The program already compiled 
so simply run it

To connect the  button in RPi  pin number is  WiringPi pin number "1"
If you need to compile use this command 
	gcc button.c -o button -lwiringPi
if you want to Run use this command in Rpi terminal
	./button

-------------------Notification---------------------------------------

This program controls the machine via Dashboard 
if you send the command in Notification action in dashboard "1" and "0"
	
	light will "on" and "off" in Rpi

	led pin in number in Rpi is 
	Wiring Pi pin number "2"


After reading this run the commands 
to send the data's from RPI to kaa Server

----sudo./build.sh run-------

if you need compile the server program

--------sudo ./build.sh deploy-----------	

//important  to RUN


----------  ./led 		      -----control the Light via notification 	
---------  ./button              -----to collect the button status and button count 
---------  sudo ./build.sh RUN   ---- to send the data to server
