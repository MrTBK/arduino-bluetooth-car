#define ENA_m1 6        // Enable/speed motor Front Right 
#define ENB_m1 9        // Enable/speed motor Back Right
#define IN_11  11    		// L298N #1 in 1 motor Front Right
#define IN_12  10    		// L298N #1 in 2 motor Front Right
#define IN_13  3   		// L298N #1 in 3 motor Back Right
#define IN_14  5   		// L298N #1 in 4 motor Back Right
int command; 			      //Int to store app command state.
int speedCar = 100; 		// 50 - 255.
int speed_Coeff=4;
void setup() {  
	  pinMode(ENA_m1, OUTPUT);
  	pinMode(ENB_m1, OUTPUT);
    pinMode(IN_11, OUTPUT);
    pinMode(IN_12, OUTPUT);
    pinMode(IN_13, OUTPUT);
    pinMode(IN_14, OUTPUT);
	Serial.begin(9600); 

  } 

void goAhead(){ 

      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
      digitalWrite(IN_13, HIGH);
      digitalWrite(IN_14, LOW);
	    analogWrite(ENB_m1, speedCar);
      analogWrite(ENA_m1, speedCar);

  }

void goBack(){ 

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, HIGH);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
	    analogWrite(ENB_m1, speedCar);
	    analogWrite(ENA_m1, speedCar);
  }

void goLeft(){ 
      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, HIGH);
      digitalWrite(IN_13, HIGH);
      digitalWrite(IN_14, LOW);
	    analogWrite(ENB_m1, speedCar);
      analogWrite(ENA_m1, speedCar);


  }

void goRight(){

      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
	    analogWrite(ENB_m1, speedCar);
      analogWrite(ENA_m1, speedCar);

  
  }

void goAheadRight(){
      
      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
      analogWrite(ENA_m1, speedCar/speed_Coeff);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, LOW);
      analogWrite(ENB_m1, speedCar/speed_Coeff);
  }

void goAheadLeft(){
      
      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, LOW);
      analogWrite(ENA_m1, speedCar);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
      analogWrite(ENB_m1, speedCar);

  }

void goBackRight(){ 

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, LOW);
      analogWrite(ENA_m1, speedCar/speed_Coeff);
      digitalWrite(IN_13, HIGH);
      digitalWrite(IN_14, LOW);
      analogWrite(ENB_m1, speedCar/speed_Coeff);
  }

void goBackLeft(){ 

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, HIGH);
      analogWrite(ENA_m1, speedCar);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, LOW);
      analogWrite(ENB_m1, speedCar);
  }

void stopRobot(){  
      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, LOW);
	    analogWrite(ENA_m1, speedCar);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, LOW);
	    analogWrite(ENB_m1, speedCar);

  }
  
void loop(){
  
if (Serial.available() > 0) {
	command = Serial.read();
  Serial.print(command);
	stopRobot(); 			//Initialize with motors stopped.

switch (command) {
case 'F':goAhead();break;
case 'B':goBack();break;
case 'L':goLeft();break;
case 'R':goRight();break;
case 'I':goAheadRight();break;
case 'G':goAheadLeft();break;
case 'J':goBackRight();break;
case 'H':goBackLeft();break;
case '0':speedCar = 100;break;
case '1':speedCar = 115;break;
case '2':speedCar = 130;break;
case '3':speedCar = 145;break;
case '4':speedCar = 160;break;
case '5':speedCar = 175;break;
case '6':speedCar = 190;break;
case '7':speedCar = 205;break;
case '8':speedCar = 220;break;
case '9':speedCar = 235;break;
case 'q':speedCar = 255;break;
}
}
}