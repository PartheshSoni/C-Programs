/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 7(b)    Topic: Check for Pallindrome for a word
 DOS:                   DOC:
 *********************************************************************************/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  char string[1000], reverse[1000];
  int i=0, n, over=0;

  printf("\nEnter a string you want to check:");
  gets(string);
 
  n=strlen(string);

   for(i=0; i<n; i++)
   {
	string[i]=tolower(string[i]);
   }
   
  for(i=0; i<n; i++)
  {
	reverse[i]=string[(n-1)-i];
  }
 
  over=0;
  for(i=0; i<n; i++)
  {
	if(reverse[i]!=string[i])
        over=1;
  }

  if(over==1)
  printf("\nThe entered string is not a pallindrome!\n");

  else
  printf("\nThe entered string is a pallindrome!\n");

  return 0;
}  
