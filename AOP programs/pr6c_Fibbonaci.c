
/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 6(c)    Topic: Fibbonaci Series
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
void fibbo(int n);

int main(void)
{
  int n=0;
  printf("\nEnter the range of the Fibbonaci series:");
  scanf("%d",&n);
  printf("\n0\t1");
  fibbo(n);
  printf("\n\n");
  return 0;
}

void fibbo(int n)
{
  static int i=0;
  static int num_1=0, result=0;
  static int num_2=1;
  while(i<n)
  {
    result=num_1+num_2;
    num_1=num_2;
    num_2=result;
    printf("\t%d", result);
    i++;
    fibbo(n);
  }
}
