# Voice Controlled Car without delay
<b> Working </b><br><br>
First the connections to the motors and chasis are made with the motor driver circuit. The motor driver is then connected to 
the arduino uno. The respective pins are declared and defined in the void setup of the code. The bluetooth(HC-05) connections are also made and the tx,rx pins 
are connected to the rx,tx pins of the arduino respectively.
Now the HC-05 is ready to connect to the control device(phone) and as mentioned in the main README file, for voice commands the app AMR_voice is used.
This app converts the voice commands into text format and is sent to the HC-05 module in a specific format.<br>
So, if the command is say forward,
The recieved input wil be *forward#, the arduino reads the data from HC-05 in the form of a string until it encounters #.<br>
The characters before this are stored in the buffer(*forward) and they are compared with the predefined commands and if matched the corresponding 
action is taken.<br>So if forward is the command then *forward is read and compared, when the if condition is met the function go_forward() is called.<br>
As there is no time delay, the motors will be running and the bluetooth can recieve the command while one action is being performed.<br>

<b> Action </b><br><br>
When the command given is forward, the result is the car starts moving forward until a new command is given.<br>
When the command given is backward 20, the result is the car starts moving backward.<br>
When the command given is left, the car moves left until a new command is given(runs in a circle).<br>
When the command given is right, the car moves right until a new command is given.<br>
When the command given is stop, the result is the car remains in rest.<br>
When the command given is not matching any of the pre defined commands the car remains in rest. The same applies if there is a mistake in voice to text conversion.<br>
[Multiple commands can be given at the same time i.e. when it is going forward, left command can be given and the response is quick]
