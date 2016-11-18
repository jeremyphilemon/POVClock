#include <Time.h>
#include <TimeLib.h>

/*
  POVCLock
  Turns the five LEDs on with respect to the 5x5 grid pattern for the respective numbers of the clock for 50 millisecond, then off for 50 milliseconds second, repeatedly.

  This code was debugged using an Arduino Pro Mini 5V 16MHz with the LEDs connected to the pins 4, 5, 6, 7, and 8. Currently, Only manual input of time works.

  Created on the 2nd day of November, 2016 by Jeremy Philemon
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

void loop() //Example displays time 12:42:08
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

void space() //Prints a space (All LEDs will be off)
{
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(30);
}

void disp(int n) //Prints the number 'n' passed.
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
    case 42: //This prints a colon.
      num(0,0,0,0,0);
      num(0,0,0,0,0);
      num(0,1,0,1,0);
      num(0,0,0,0,0);
      num(0,0,0,0,0);
      break;
  }
}

void num(int a,int b,int c, int d, int e) //This is for one strip of 5 LEDs.
{
  digitalWrite(4,a);
  digitalWrite(5,b);
  digitalWrite(6,c);
  digitalWrite(7,d);
  digitalWrite(8,e);
  delay(30);
}
