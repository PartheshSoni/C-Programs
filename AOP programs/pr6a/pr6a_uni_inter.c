//This is the very latest one!! 27/3/17



#include <stdio.h>

void Union(int array1[], int array2[], int i, int n1, int n2, int UnionA[]);
void Intersection(int array1[], int array2[], int i, int n1, int n2, int IntersectionA[]);

int main(void)
{
       int  i, n1, n2;


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

  Intersection();
  Union();

  printf("\nThe matrix containing union is...\n");

  for(i=0; i<(p+c); i++)
  printf("%d\t", UnionA[i]);

  printf("\nThe Intersection of the given two arrays is...\n");

  for(i=0; i<p-1; i++)
	printf("%d\t", IntersectionA[i]);

	printf("\n\n");
}

void Union(int array1[], int array2[], int i, int n1, int n2, int UnionA[])
{
	int UnionTest[n1+n2], j, count=0;

        for(i=0; i<n1; i++)
	{
		UnionTest[i]=array1[i];
                count++;
	}

	for(i=0; i<n1; i++)
	{
		for(j=0; j<n2; j++)
		{
			if(UnionTest[i]!=array2[j])
			UnionTest[count++]=array2[j];
		}
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

}



void Intersection(int array1[], int array2[], int i, int n1, int n2, int IntersectionA[])
{
	int IntersectionTest[n1+n1], i, j;

	for(i=0; i<n1; i++)
	{
		for(j=0; j<n2; j++)
		{
			if(array1[i]==array2[j])
			IntersectionTest[

