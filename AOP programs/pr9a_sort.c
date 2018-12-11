/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 9(a)    Topic: Sorting of array (int) using pointers and fun.
 DOS:                   DOC:
 *********************************************************************************/
#include <stdio.h>

void main()
{
  int *array, *arrays, arr[10];
  int i, j;
  array=arr;


  printf("\nEnter 10 integers: ");
  for(i=0; i<10; i++)
  scanf("%d", array+i);

  int *sort(int, int*);
  arrays=sort(i, array);

  printf("\nThe sorted array:\n");
  for(i=0; i<10; i++)
  printf("%d\n", *(arrays+i));

  return;

}


int *sort(int i, int *array)
{
  int count, j, buffer;
  count=i;


  for(i=1; i<count; i++)
  {
    for(j=1; j<count; j++)
    {
      if(*(array+j-1)>*(array+j))
      {
        buffer=*(array+j);
        *(array+j)=*(array+j-1);
        *(array+j-1)=buffer;
      }
    }
  }

  return array;
}
