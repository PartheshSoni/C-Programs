/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 6(a)    Topic: Union and Intersection of two matrix
 DOS:                   DOC:
 *********************************************************************************/

//This is the very latest one!! 27/3/17



#include <stdio.h>

int main(void)
{
       int  i,j, n1, n2;


	printf("\nHow many no. do you want to enter in array 1 and array 2 respectively?:");
	scanf("%d%d", &n1, &n2);

        int array1[n1], array2[n2], UnionA[n1+n2], IntersectionA[n1];
  printf("\nEnter array 1:");
	for(i=0; i<n1; i++)
	{
		scanf("%d", &array1[i]);
	}

	printf("\nEnter array 2:");
	for(j=0; j<n2; j++)
	{
		scanf("%d", &array2[j]);
	}
  int Union(int array1[], int array2[], int n1, int n2, int UnionA[]);
  int Intersection(int array1[], int array2[], int n1, int n2, int IntersectionA[]);

  n1=Union(array1, array2,  n1, n2, UnionA);
  n2=Intersection(array1, array2, n1, n2, IntersectionA);

  printf("\nThe matrix containing union is...\n");

  for(i=0; i<n1; i++)
  printf("%d\t", UnionA[i]);

  printf("\nThe Intersection of the given two arrays is...\n");

  for(i=0; i<n2; i++)
	printf("%d\t", IntersectionA[i]);

	printf("\n\n");
}

int Union(int array1[], int array2[], int n1, int n2, int UnionA[])
{
	int UnionTest[n1+n2+1000],i, j,p, count=0, gotit=0;
  
        for(i=0; i<n1; i++)
	{
		UnionTest[i]=array1[i];
                count++;
	}

	for(j=0; j<n2; j++)
	{
		for(i=0; i<n1; i++)
		{
			if(UnionTest[i]!=array2[j])
			gotit++;
		}
          if(gotit!=0)
          UnionTest[count++]=array2[j];
	}

        p=0;
        for(i=0; i<count; i++)                              //To check for any repetition in array1.
	{
	 for(j=(i+1); j<(count); j++)     
	 {
		if(UnionTest[i]==UnionTest[j])
		goto leave;
	 }
	 UnionA[p]=UnionTest[i];
         p++;
	 leave:
	 continue;
        }

	return p;
}



int Intersection(int array1[], int array2[], int n1, int n2, int IntersectionA[])
{
	int IntersectionTest[n1], i, j, count=0, p=0;

	for(i=0; i<n1; i++)
	{
		for(j=0; j<n2; j++)
		{
			if(array1[i]==array2[j])
			IntersectionTest[count++]=array1[i];
		}
	}


 p=0;
        for(i=0; i<count; i++)                              //To check$
        {
         for(j=(i+1); j<(count); j++)     
         {
                if(IntersectionTest[i]==IntersectionTest[j])
                goto leave;
         }
         IntersectionA[p]=IntersectionTest[i];
         p++;
         leave:
         continue;
        }
return p;
}
