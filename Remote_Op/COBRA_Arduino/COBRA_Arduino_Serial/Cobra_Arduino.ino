/*
 * This code was made by the senior design team working on the Viper Rover Project
 * Last edit 7/27/23
*/

// Servo Libraries
#include <Servo.h> 
#include <ServoEasing.hpp> // helps create smoother motion in servo motors 
#include <HardwareSerial.h>
 
struct Msg{
  unsigned short steer_l;
  unsigned short steer_r;
  unsigned short throttle;
  unsigned short brake;
};

union BytesToMsg {
  byte bytes[8];
  Msg msg;
};

unsigned short my_steer_l = 0;
unsigned short my_steer_r = 0;
unsigned short my_throttle = 0;
unsigned short my_brake = 0;

BytesToMsg msg_buffer;

const long BAUD_RATE = 115200;

// Channel Values
int rcCH1 = 0; // Left - Right
int rcCH2 = 0; // Forward - Reverse

// Channel Values
int rawCH1 = 0; // Left - Right
int rawCH2 = 0; // Forward - Reverse

// DC MOTOR PINS
// Motor FR Control Connections
#define pwmFR 2
#define in1FR 22
#define in2FR 23

// Motor BR Control Connections
#define pwmBR 3
#define in1BR 24
#define in2BR 25  

// Motor FL Control Connections
#define pwmFL 4
#define in1FL 27
#define in2FL 26

// Motor BL Control Connections
#define pwmBL 5
#define in1BL 29
#define in2BL 28

// SERVO MOTOR PINS
#define servoFR 6
#define servoBR 7
#define servoFL 8
#define servoBL 9

// Servo objects
ServoEasing sFR;
ServoEasing sBR;
ServoEasing sFL;
ServoEasing sBL;

// DC MOTOR INITIAL VALS

// Motor Speed Values - Start at zero
int MotorSpeedFR = 0;
int MotorSpeedBR = 0;
int MotorSpeedFL = 0;
int MotorSpeedBL = 0;

// Motor Direction Values - 0 = backward, 1 = forward
int MotorDirFR = 1;
int MotorDirBR = 1;
int MotorDirFL = 1;
int MotorDirBL = 1;

// Servo Angles
float sFRAngle = 0;
float sBRAngle = 0;
float sFLAngle = 0;
float sBLAngle = 0  ;

// neutral position pushing back
float sFRA0 = 89;
float sBRA0 = 90;
float sFLA0 = 89;
float sBLA0 = 90;

// counter var
int counter = 0;

bool motorLockout = false;
int lockoutCountdown;
bool PrimaryDir = true;
// true is forward
// false is backward

// DC MOTOR CONTROL FCNS

// Control Motor FR
void mControlFR(int mspeed, int mdir) {
  // if speed is low, just float
  if (mspeed < 25) {
    digitalWrite(in1FR, HIGH);
    digitalWrite(in2FR, HIGH);
  }
  else {
    if (mdir == 0) {
      // Motor backward
      digitalWrite(in1FR, LOW);
      digitalWrite(in2FR, HIGH);
    } else {
      // Motor forward
      digitalWrite(in1FR, HIGH);
      digitalWrite(in2FR, LOW);
    }
  }
  // Control motor
  analogWrite(pwmFR, mspeed);
}

// Control Motor BR
void mControlBR(int mspeed, int mdir) {
  // if speed is low, just float
  if (mspeed < 25) {
    digitalWrite(in1BR, HIGH);
    digitalWrite(in2BR, HIGH);
  }
  else {
    if (mdir == 0) {
      // Motor backward
      digitalWrite(in1BR, LOW);
      digitalWrite(in2BR, HIGH);
    } else {
      // Motor forward
      digitalWrite(in1BR, HIGH);
      digitalWrite(in2BR, LOW);
    }
  }
  // Control motor
  analogWrite(pwmBR, mspeed);
}

// Control Motor FL
void mControlFL(int mspeed, int mdir) {
  // if speed is low, just float
  if (mspeed < 25) {
    digitalWrite(in1FL, HIGH);
    digitalWrite(in2FL, HIGH);
  }
  else {
    if (mdir == 0) {
      // Motor backward
      digitalWrite(in1FL, HIGH);
      digitalWrite(in2FL, LOW);
    } else {
      // Motor forward
      digitalWrite(in1FL, LOW);
      digitalWrite(in2FL, HIGH);
    }
  }
  // Control motor
  analogWrite(pwmFL, mspeed);
}

// Control Motor BL
void mControlBL(int mspeed, int mdir) {
  // if speed is low, just float
  if (mspeed < 25) {
    digitalWrite(in1BL, HIGH);
    digitalWrite(in2BL, HIGH);
  }
  else {
    if (mdir == 0) {
      // Motor backward
      digitalWrite(in1BL, HIGH);
      digitalWrite(in2BL, LOW);
    } else {
      // Motor forward
      digitalWrite(in1BL, LOW);
      digitalWrite(in2BL, HIGH);
    }
  }
  // Control motor
  analogWrite(pwmBL, mspeed);
}


////////////////////////////////SETUP//////////////////////////////////
void setup() {
  // Start serial monitor
  Serial.begin(BAUD_RATE);
  Serial.setTimeout(0.1);

  //wait for a serial connection
  while(Serial.available() <=0){
    delay(100);
  }

  // FR
  pinMode(pwmFR, OUTPUT); // ENA
  pinMode(in1FR, OUTPUT); // IN1
  pinMode(in2FR, OUTPUT); // IN2
  // BR
  pinMode(pwmBR, OUTPUT); // ENA
  pinMode(in1BR, OUTPUT); // IN1
  pinMode(in2BR, OUTPUT); // IN2
  // FL
  pinMode(pwmFL, OUTPUT); // ENA
  pinMode(in1FL, OUTPUT); // IN1
  pinMode(in2FL, OUTPUT); // IN2
  // BL
  pinMode(pwmBL, OUTPUT); // ENA
  pinMode(in1BL, OUTPUT); // IN1
  pinMode(in2BL, OUTPUT); // IN2

  // Servo setup - sets them all to 90
  sFR.attach(servoFR);
  sBR.attach(servoBR);
  sFL.attach(servoFL);
  sBL.attach(servoBL);

  sFR.write(90);
  sBR.write(90);
  sFL.write(90);
  sBL.write(90);

  sFR.setSpeed(300);
  sBR.setSpeed(300);
  sFL.setSpeed(300);
  sBL.setSpeed(300);

}

////////////////////////////////LOOP//////////////////////////////////
void loop() {
  //parse any waiting serial messages
  while(Serial.available()){
    uint8_t msg_size;
    Serial.readBytes(&msg_size,sizeof(msg_size));
    if(msg_size == sizeof(msg_buffer)){
      Serial.readBytes(msg_buffer.bytes,sizeof(msg_buffer));
      Serial.flush();
      my_steer_l = msg_buffer.msg.steer_l;
      my_steer_r = msg_buffer.msg.steer_r;
      my_throttle = msg_buffer.msg.throttle;
      my_brake = msg_buffer.msg.brake;
      digitalWrite(LED_BUILTIN,HIGH);
    }
  } 

  Serial.flush();
  
  rcCH1 = (my_steer_l > 0) ? my_steer_l : -my_steer_r;
  rcCH2 = (my_throttle > 0) ? my_throttle : -my_brake;
   
  // Print values to serial monitor for debugging
  // only print every 100 runs so don't spam
  if (counter == 0){
    Serial.print("Ch1 = ");
    Serial.print(rcCH1);
  
    Serial.print(" Ch2 = ");
    Serial.print(rcCH2);
  
    counter++;
  }else{
      counter++;
  }
    
  if(counter == 20){
    counter = 0;
  }
  
  // Set speeds with channel 3 value
  MotorSpeedFR = 2.55*abs(rcCH2);
  MotorSpeedBR = 2.55*abs(rcCH2);
  MotorSpeedFL = 2.55*abs(rcCH2);
  MotorSpeedBL = 2.55*abs(rcCH2);
  
  // Set angle
  sFRAngle = sFRA0 + rcCH1*0.55;
  sBRAngle = sBRA0 + rcCH1*-0.2;
  sFLAngle = sFLA0 + rcCH1*0.55;
  sBLAngle = sBLA0 + rcCH1*-0.2;
  
  // Normal Mode
  
  // Set forward/backward direction with channel 2 value
  if (rcCH2 >= 0) {
    //Forward
    MotorDirFR = 1;
    MotorDirBR = 1;
    MotorDirFL = 1;
    MotorDirBL = 1;
    //Serial.println("Forward");
  } else {
    //Backward
    MotorDirFR = 0;
    MotorDirBR = 0;
    MotorDirFL = 0;
    MotorDirBL = 0;
    //Serial.println("Backward");
  }
  
  // Ensure that speeds are between 0 and 255
    
  MotorSpeedFR = constrain(MotorSpeedFR, 0, 255);   
  MotorSpeedBR = constrain(MotorSpeedBR, 0, 255);
  MotorSpeedFL = constrain(MotorSpeedFL, 0, 255);
  MotorSpeedBL = constrain(MotorSpeedBL, 0, 255);
  
  // Steer Servos
  sFR.startEaseTo(sFRAngle);
  sBR.startEaseTo(sBRAngle);
  sFL.startEaseTo(sFLAngle);
  sBL.startEaseTo(sBLAngle);
  
  // output debugging info
  if (counter == 0){
    Serial.print("Front Right Angle: ");
    Serial.print(sFRAngle);
  
    Serial.print("| Back Right Angle: ");
    Serial.print(sBRAngle);
  
    Serial.print("| Front Left Angle:");
    Serial.print(sFLAngle);
   
    Serial.print("| Back Left Angle: ");
    Serial.println(sBLAngle);
  
    Serial.print("Front Right Speed: ");
    Serial.print(MotorSpeedFR);
  
    Serial.print("| Back Right Speed: ");
    Serial.print(MotorSpeedBR);
  
    Serial.print("| Front Left Speed:");
    Serial.print(MotorSpeedFL);
   
    Serial.print("| Back Left Speed: ");
    Serial.println(MotorSpeedBL);
    
    
    Serial.println();
   }
  
   if((MotorDirFR == 1 && !PrimaryDir) || (MotorDirFR == 0 && PrimaryDir) ){
    // start lockout countdown
    lockoutCountdown = 6;
    motorLockout = true;
    lockoutCountdown--;
   }
    
   if(MotorDirFR == 1){
     PrimaryDir = true;
   }else{
     PrimaryDir = false;
   }
  
   if(lockoutCountdown <= 0){
    motorLockout = false;
   }else{
    lockoutCountdown--;
   }  

   if(!motorLockout){
   //Drive Motors
     mControlFR(MotorSpeedFR, MotorDirFR);
     mControlBR(MotorSpeedBR, MotorDirBR);
     mControlFL(MotorSpeedFL, MotorDirFL);
     mControlBL(MotorSpeedBL, MotorDirBL);
   }
   else{
     mControlFR(0, MotorDirFR);
     mControlBR(0, MotorDirBR);
     mControlFL(0, MotorDirFL);
     mControlBL(0, MotorDirBL);
   }

   delay(10);
  
}
