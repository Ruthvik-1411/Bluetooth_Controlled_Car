# Bluetooth_Controlled_Car
<b> Components Used </b>
<li> Arduino Uno R3
<li> L293D Motor driver
<li> Bluetooth HC-05 Module
<li> Jumper wires
<li> Chasis
<li> [App] <a href="https://play.google.com/store/apps/details?id=com.giumig.apps.bluetoothserialmonitor">Bluetooth controller</a>
<li> [App] <a href="https://amr-voice.en.aptoide.com/app"> Voice commands</a>
<li> Power source
<br><br>
<b> Overview </b><br>
<li>Voice commands<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The above mentioned app is used for voice commands. It can be downloaded from the given link.<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This app uses the google assistant to convert the speech to text and then transmit to the HC-05 via Bluetooth.<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Example: If the speech is one word, say Bluetooth the transmitted string is *Bluetooth#.<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Example: If the speech is two words, say My phone or Forward 10 the transmitted string is *My phone#, *Forward &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10#.<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The application adds an * and # at the beginning and ending respectively.<br>
<li>Bluetooth controller<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This app contains varies modes. In the terminal mode, the command can be typed easily and is transmitted without &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;any alterations.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Example: If the Command is one word, say Bluetooth the transmitted string is Bluetooth.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Example: If the Command is two words, say My phone or Forward 10 the transmitted string is My phone, Forward &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The given command is sent without any alterations.<br>
<li>Working<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; A predefined command is sent from the phone(control device) to the Bluetooth HC-05 module via bluetooth.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The arduino reads this data from HC-05 module and splits the string accordingly.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This command is executed and the car moves accordingly. If a time delay is included then it is also taken in &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;consideration.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The reason the time delay is included is to substitute the distance to be travelled.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Ideally a voice controlled car uses two commands one that directs the direction and other the distance to travel.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; If LM393 speed sensors are used the distance can be obtained with the help of encoder wheels.<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; When the required distance is met the car stops. So if a command like "backward 10cm" is given the action can be &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;performed.<br>
