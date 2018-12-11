/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 2(c)    Topic:Pharmaceutical Company
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
#include <math.h>

int main(void)
{
 float a,b, time, cost;
 printf("\nEnter the time taken to complete the chemical process (in hrs.):");
 scanf("%f", &time);
 
 if(time<=48.00)
 { 
  cost=time*2000;
  }
  else if(time>48.00 && time<=240.00)
 {
  a=48*2000;
  b=time-48.00;
  cost=a+b*4000;
 }
  else if(time>240.00)
 { 
  a=2000*48.00;
  b=4000*192.00;
  cost=a+b+(time-240.00)*10000;
  }

  printf("\nThe cost for manufacturing is %.2fINR.\n\n", cost);
  return 0;
}
 
  
