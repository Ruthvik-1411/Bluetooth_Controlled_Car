int motor1a=8;      //Declaring motor pins from motor driver circuit.
int motor1b=9;
int motor2a=10;
int motor2b=11;
int my_time;       //To get time from the input.

void setup() {
  // put your setup code here, to run once:
pinMode(motor1a,OUTPUT);                        //Setting up the status of Motor pins.
pinMode(motor1b,OUTPUT);
pinMode(motor2a,OUTPUT);
pinMode(motor1b,OUTPUT);

Serial.begin(9600);                            //To start the commuication at this baud rate.
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())                      //If there is anything in the buffer, perform the following actions. 
{ delay(10);                                   //wait for 10 milliseconds.
  String ch = Serial.readStringUntil(' ');     //Read the data in string format until you encounter the character inside ' ' .
  
  if(ch=="10"){                               //If the string is 10 then assign delay time i.e. my_time as 10seconds.
    my_time=10*1000;
  }
  else if(ch=="20"){                          //If the string is 20 then assign delay time i.e. my_time as 20seconds.
    my_time=20*1000;
  }
  else if(ch=="30"){                          //If the string is 30 then assign delay time i.e. my_time as 30seconds.
    my_time=30*1000;
  }
  else if(ch=="Forward"){                    //If the string is Forward then make the car go forward for the time(my_time) and stop it.
    go_forward();
    delay(my_time);
    rest();
  }
  else if(ch=="Backward"){                   //If the string is Backward then make the car go backward for the time(my_time) and stop it.
    go_backward();
    delay(my_time);
    rest();
  }
  else if(ch=="Left"){                     //If the string is Left then turn the car left for 0.5seconds and stop.
    turn_left();
    delay(500);
    rest();
  }
  else if(ch=="Right"){                    //If the string is Right then turn the car right for 0.5seconds and stop.
    turn_right();
    delay(500);
    rest();
  }
if (ch=="Stop"){                          //If the string is Stop then stop the car.
  rest();
}
}
}
//end void loop

void go_forward(){                        //A function for the car to move forward, both motors are ON and going in anti-clockwise direction. 
  digitalWrite(motor1a,LOW);              //The configuration of LOW,HIGH can vary depending on the circuit made with motor driver and motors. 
  digitalWrite(motor1b,HIGH);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,HIGH);
}
void go_backward(){                      //A function for the car to move backward, both motors are ON and going in clockwise direction.
  digitalWrite(motor1a,HIGH);             
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,LOW);
}
void turn_left(){                       //A function for the car to move left, Left motor is OFF and Right motor is ON.
  digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,HIGH);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,HIGH);
}
void turn_right(){                     //A function for the car to move right, Left motor is ON and Right motor is OFF. 
  digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,HIGH);
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,HIGH);
}
void rest(){                           //A function for the car to be a rest, Both motors are OFF. Either all are LOW or all are HIGH.
  digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,LOW);
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,LOW);
}
