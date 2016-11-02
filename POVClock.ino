#include <Time.h>
#include <TimeLib.h>

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
/*void loop() {
  int arr[]={4,5,6,7,8};
  for(int i=0;i<5;i++)
  {
  digitalWrite(arr[i], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(arr[i], LOW);    // turn the LED off by making the voltage LOW
  delay(50);
  }// wait for a second
}*/

/*void loop()
{
  digitalWrite(4,HIGH); //First Line of H
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,HIGH); 
  delay(500); 
  for(int i=0;i<3;i++)
  {
    digitalWrite(4,LOW); //Middle Line of H
    digitalWrite(5,LOW); 
    digitalWrite(6,HIGH); 
    digitalWrite(7,LOW); 
    digitalWrite(8,LOW);  
    delay(500); 
  }
  digitalWrite(4,HIGH); //Last Line of H
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  digitalWrite(8,HIGH); 
  delay(500);
space();
}*/

void loop()
{
   disp(1);
   disp(2);
   disp(42);
   disp(4);
   disp(2);
   disp(42);
   disp(0);
   disp(8);
}

void space() //prints two space
{
    digitalWrite(4,LOW); 
    digitalWrite(5,LOW); 
    digitalWrite(6,LOW); 
    digitalWrite(7,LOW); 
    digitalWrite(8,LOW); 
    delay(3 0); 
}

void disp(int n)
{
  switch(n)
  {
    case 1:
      space();
      num(0,1,0,0,0);
      num(1,1,1,1,1);
      space();
      space();
      break;
    case 2:
      num(0,1,0,0,1);
      num(1,0,0,0,1);
      num(1,0,0,1,1);
      num(1,0,1,0,1);
      num(0,1,0,0,1);
      break;
    case 3:
      space();
      num(1,0,0,0,1);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(0,1,0,1,0);  
      break;
    case 4:
      num(0,1,1,0,0);
      num(0,1,0,1,0);
      num(1,0,0,1,0);
      num(1,1,1,1,1);
      num(0,0,0,1,0);
      break;
    case 5:
      num(1,1,1,0,1);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(1,0,0,1,0);
      break;
    case 6:
      num(0,1,1,1,0);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(0,0,0,1,0);
      break;
    case 7:
      num(1,0,0,0,0);
      num(1,0,0,0,0);
      num(1,0,1,1,1);
      num(1,1,0,0,0);
      num(1,0,0,0,0);
      break;
    case 8:
      num(0,1,0,1,0);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(1,0,1,0,1);
      num(0,1,0,1,0);
      break;
    case 9:
      space();
      num(1,1,1,0,0);
      num(1,0,1,0,0);
      num(1,0,1,0,0);
      num(1,1,1,1,1);
      break;
    case 0:
      num(0,1,1,1,0);
      num(1,0,0,0,1);
      num(1,0,0,0,1);
      num(1,0,0,0,1);
      num(0,1,1,1,0);
      break;
    case 42:
      num(0,0,0,0,0);
      num(0,0,0,0,0);
      num(0,1,0,1,0);
      num(0,0,0,0,0);
      num(0,0,0,0,0);
      break;
  }
}

void num(int a,int b,int c, int d, int e)
{
  digitalWrite(4,a); 
  digitalWrite(5,b); 
  digitalWrite(6,c); 
  digitalWrite(7,d); 
  digitalWrite(8,e); 
  delay(30); 
}


