/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 7(a)    Topic: Change the case of the Inputted Sentence
 DOS:                   DOC:
 *********************************************************************************/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char str[1000];
  int code, i;
  printf("Enter your statement:");
  gets(str);

  printf("\nChoose the code of the transformation you want to perform:\n1> Title Case\n2> UPPER CASE\n3> lower case\n4> Sentence Case");
  enter:
  printf("\n\nEnter a valid code:");
  scanf("%d", &code);


  switch(code)
  {
    case 1:
    for(i=0; str[i]!='\0'; i++)
    {
      if(i==0)
      str[i]=toupper(str[i]);

      if((str[i]==' '|| str[i]==',') && isalpha(str[i+1]))
      str[i+1]=toupper(str[i+1]);

    }
    break;
    
    case 2:
    for(i=0; str[i]!='\0'; i++)
    {
     str[i]=toupper(str[i]);
    }
    break;

    case 3:
    for(i=0; str!='\0'; i++)
    {
     str[i]=tolower(str[i]);
    }
    break;

    case 4:
    str[0]=toupper(str[0]);
    break;

   default:
   printf("\nPlease enter a valid code!\n");
   goto enter;
  }

   printf("\nThe statement of your given choice is as follows:\n\"%s\"\n\n", str);

   return 0;
}

