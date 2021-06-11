# Text Command Controlled Car Using Bluetooth(with delay)
<b> Working </b><br><br>
First the connections to the motors and chasis are made with the motor driver circuit. The motor driver is then connected to 
the arduino uno. The respective pins are declared and defined in the void setup of the code. The bluetooth(HC-05) connections are also made and the tx,rx pins 
are connected to the rx,tx pins of the arduino respectively.
Now the HC-05 is ready to connect to the control device(phone) and as mentioned in the main README file, for text commands the app Arduino bluetooth controller by Giumig Apps is used.
This app transmits the given commands to the HC-05 module directly without any changes.<br>
So, if the command is say Forward 10,<br>
The recieved input wil be Forward 10, 
the arduino reads this sequence of string and breaks it at the space between forward and 10 resulting in two strings(Foward and 10).<br>
The two strings are then compared simultaneously with the conditions containing information regarding time delays. The corresponding time is set.<br>
It then goes through a sequence of if conditions checking for commands like Forward, Backward, Left etc.<br>
The command inside the correct condition is executed and the time delay obtained from the previous comparision is applied.<br>

<b> Action </b><br><br>
When the command given is Forward 10, the result is the car starts moving forward for 10 seconds and stops.<br>
When the command given is Backward 20, the result is the car starts moving backward for 20 seconds and stops.<br>
When the command given is Left, the result is the car moves left for 0.5s(typically a quarter circle, can vary according to output of motors) and stops.<br>
When the command given is Right, the result is the car moves right for 0.5s and stops.<br>
When the command given is Stop, the result is the car remains in rest.<br>
[Multiple commands cannot be given at the same time]<br><br>
The only differnce between Direct commands and Voice commands is the format in which the data is transmitted. It is simple in Direct commands as the recived data is the same as 
sent data and contains no alterations of any sorts.
