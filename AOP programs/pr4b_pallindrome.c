/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 4(b)    Topic: Check for pallindrome
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
#include <math.h>

int main(void)
{
 long long int test,count, counter,buffer, a, b ,num, number, i;

 printf("\nEnter a number:");
 scanf("%lld", &num);
 test=num;
 buffer=test;
 counter=0;

 while(test!=0)
 {
  test=test/10;
  counter++;
 }

count=counter-1;
number=0;
for(i=0; i<counter; i++)
{
 a=num%10;
 b=a*pow(10, count);
 number=b+number;
 num=num/10;
 count--;
 }
 
 if(number==buffer)
printf("\nThe entered %lld digit number is a pallidrome and its reverse is %lld\n\n",counter,  number);

 else
 printf("\nThe entered %lld digit number is not a pallidrome and its reverse is %lld\n\n",counter,  number);
 return 0;
}

