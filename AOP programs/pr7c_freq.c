/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 7(c)    Topic: Frequency for letters in given word
 DOS:                   DOC:
 *********************************************************************************/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char string[1000];
	int n;

	printf("\nEnter the string here:");
	gets(string);
   
	n=strlen(string);

   	void frequency(char string[], int n);
	frequency(string, n);

	return;
}

void frequency(char string[], int n)
{
	int i, j, flag, flag_sen;
	
	printf("\nIn the given word");
	for(i=0; i<n; i++)
	{
		flag=0;
		for(j=(i+1); j<n; j++)
		{
			if((string[i]==string[j]) || (string[i]==string[j]+32) || (string[i]==string[j]-32))
			flag++;
		}
		if(flag>0)
	 	{
			flag_sen++;
			printf(", the letter %c is repeated %d times", tolower(string[i]), flag+1);
		}
	}
	
	if(flag_sen==0)
	printf("none of the letters are repeating");
	printf(".\n\n");
	return;
}

