# Voice Controlled Car Using Bluetooth
<b> Working </b><br><br>
First the connections to the motors and chasis are made with the motor driver circuit. The motor driver is then connected to 
the arduino uno. The respective pins are declared and defined in the void setup of the code. The bluetooth(HC-05) connections are also made and the tx,rx pins 
are connected to the rx,tx pins of the arduino respectively.
Now the HC-05 is ready to connect to the control device(phone) and as mentioned in the main README file, for voice commands the app AMR_voice is used.
This app converts the voice commands into text format and is sent to the HC-05 module in a specific format.<br>
So, if the command is say forward 10,<br>
The recieved input wil be *forward 10#, 
the arduino reads this sequence of string and breaks it at the space between forward and 10 resulting in two strings.<br>
The two strings are then compared simultaneously with the conditions containing information regarding time delays. The corresponding time is set.<br>
It then goes through a sequence of if conditions checking for commands like forward, backward, left etc.<br>
The command inside the correct condition is executed and the time delay obtained from the previous comparision is applied.<br>

<b> Action </b><br><br>
When the command given is forward 10, the result is the car starts moving forward for 10 seconds and stops.<br>
When the command given is backward 20, the result is the car starts moving backward for 20 seconds and stops.<br>
When the command given is left, the result is the car moves left for 0.5s(typically a quarter circle, can vary according to output of motors) and stops.<br>
When the command given is right, the result is the car moves right for 0.5s and stops.<br>
When the command given is stop, the result is the car remains in rest.<br>
When the command given is not matching any of the pre defined commands the car remains in rest. The same applies if there is a mistake in voice to text conversion.<br>
[Multiple commands cannot be given at the same time]
