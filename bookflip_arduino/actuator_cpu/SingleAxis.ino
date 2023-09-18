// int Speed = 500;

// const int step_pin = 2;
// const int direction_pin = 5;

// void SingleAxisInit() {
//   Serial.begin(9600);

//   pinMode(step_pin,OUTPUT);
//   pinMode(direction_pin,OUTPUT);

//   digitalWrite(direction_pin,HIGH);
// }

// void slide(double millimeter) {
//   int steps = 4 * millimeter * 10;
//     for (int s=1; s <=steps; s++){
//        digitalWrite(step_pin,HIGH);
//        delayMicroseconds(Speed);
//        digitalWrite(step_pin,LOW);
//        delayMicroseconds(Speed);
//     }
// }

// void SingleAxisMain() {
// if(Serial.available()){
//     byte buf;
//     while (1) {
//       if(Serial.available()){
//          buf = Serial.read();
//       }
//       if(buf == 'A'){ 
//         digitalWrite(direction_pin,HIGH);
//         slide(1);
//       } else if(buf == 'B'){
//         digitalWrite(direction_pin,LOW);
//         slide(1);
//       }
//     }
//   }
// }



int Speed = 500;

const int step_pin = 2;
const int direction_pin = 5;

void UniaxialActuatorInit() {
  Serial.begin(9600);

  pinMode(step_pin,OUTPUT);
  pinMode(direction_pin,OUTPUT);

  digitalWrite(direction_pin,HIGH);
}

void slide(double millimeter) {
  int steps = 16 * millimeter * 10;
    for (int s=1; s <=steps; s++){
       digitalWrite(step_pin,HIGH);
       delayMicroseconds(Speed);
       digitalWrite(step_pin,LOW);
       delayMicroseconds(Speed);
    }
}

void UniaxialActuatorMain() {
if(Serial.available()){
    byte buf;
    while (1) {
      if(Serial.available()){
         buf = Serial.read();
      }
      if(buf == 'A'){ 
        digitalWrite(direction_pin,HIGH);
        slide(1);
      } else if(buf == 'B'){
        digitalWrite(direction_pin,LOW);
        slide(1);
      }
    }
  }
}
