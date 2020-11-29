#include <Servo.h>
#include <stdlib.h>
#include <stdio.h>

Servo servo1;            
const int switch1 = 4; 
int count = 0;
void setup()
{
  pinMode(switch1,INPUT); 
  servo1.attach(9);
  servo1.write(0);
  Serial.begin(9600);
}

void loop()
{
  int randNumber = 1;

  if (count % 4 == 0){
    randNumber = 1;
  }
  else if (count % 4 == 1){
    randNumber = 2;
  }
  else if (count % 4 == 2){
    randNumber = 3;
  }
  else if (count % 4 == 3){
    randNumber = 4;
  }
  int switchStatus = digitalRead(switch1);

  if (switchStatus == HIGH){
    count++;
    if (randNumber == 1){
      delay(1000);
      servo1.write(35);
      delay(500);
      servo1.write(0);
      delay(1000);
    }
    else if (randNumber == 2){
      servo1.write(35);
      delay(1000);
      delay(3000);
      servo1.write(0);
      delay(1000);
    }
    else if (randNumber == 3){
      servo1.write(10);
      delay(1000);
      servo1.write(20);
      delay(1000);
      servo1.write(35);
      delay(1000);
      servo1.write(0);
      delay(1000);
    }
    else if (randNumber == 4){
      servo1.write(10);
      delay(1000);
      servo1.write(0);
      delay(1000);
      servo1.write(20);
      delay(1000);
      servo1.write(0);
      delay(1000);
      servo1.write(35);
      delay(1000);
      servo1.write(0);
      delay(1000);
    }
  }
}
