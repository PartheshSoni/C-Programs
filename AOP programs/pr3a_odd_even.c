/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 3(a)    Topic: Find whether Odd or Even
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
#include <math.h>

int main(void)
{
 int num, a, b;
 
 printf("Enter a number:");
 scanf("%d", &num);

 a=num-(num/10)*10;
 if(a==2 || a==0 || a==4 || a==6 || a==8)
 { 
  printf("\nThe number entered is even.\n\n");
 }

 else
 printf("\nThe entered number is odd.\n\n");
 return 0;
}
