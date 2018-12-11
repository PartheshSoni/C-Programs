/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 3(d)    Topic: Find maximum out of three no.
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>

int main(void)
{
 int a, b, c;
 
 printf("\nEnter three numbers. a=");
 scanf("%d", &a);

 printf("...b=");
 scanf("%d", &b);

 printf("...c=");
 scanf("%d", &c);

 if(a>b)
 if(a>c) 
  printf("a is maximum.");
  else
  {printf("c is maximun");}
  
   
 else if(a<b)
 {
  if(b>c);
  {printf("b is maximun");}
  else
  {printf("c is maximun");}
 }

return 0;
}
  
