/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 4(a)    Topic: Find value of series
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
#include <math.h>

int main(void)
{
 long long int n, i;
 double x, a, sum=0.00f;
 printf("\nCorresponding to the series...(1/x)-(2/x^2)+(3/x^3)....");
 printf("Enter the values of n and x, with space inbetween:");
 scanf("%lld %lf", &n, &x);
 
 for(i=0; i<=n; i++)
 {
  a=pow(-1,i+1)*(i/pow(x, i));
  sum=sum+a;
 }

 printf("\nThe sum of the entered series is %.2lf for value of n=%lld.\n\n", sum, n);
 return 0;
}
