/*what is the no. of elements-1=3 3
 array-1=1 2 3
 array-2=6 2 5*/



#include <stdio.h>

void Intersection(void);
void Union(void);
static int array1[100];
static int array2[100];

int i, j, n1, n2;
int UnionA[200];
int IntersectionA[100];
int c=0, p=0, k=0;
int result=0;

int main(void)
{

	printf("\nHow many no. do you want to enter in array 1 and array 2 respectively?:");
	scanf("%d%d", &n1, &n2);

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

  for(i=0; i<p; i++)
	printf("%d\t", IntersectionA[i]);

	printf("\n\n");
}

void Union(void)
{
	p=0;
  for(i=0; i<n1; i++)                              //To check for any repetition in array1.
  {
	 for(j=(i+1); j<(n1); j++)     
	 {
		if(array1[i]==array1[j])
		goto leave;
	 }
	 UnionA[p]=array1[i];
     p++;
	 leave:
	 continue;
  }

  c=0;
  for(i=0; i<n2; i++)
  {
    for(j=0; j<=(p+c); j++)
    {
      if(array2[i]==UnionA[j])
			break;
		 }
		 if(j>=p+c)
		 {
			 UnionA[p+c]=array2[i];
			 c++;
		 }
  }
}

void Intersection(void)
{
	p=0;
	for(i=0; i<n1; i++)
	{
		for(j=0; j<n2; j++)
		{                                                              //To check for any repetition in array1
			if(array1[i]==array2[j])
			{
				for(k=0; k==0?(k<=0):(k<p); k++)
				{
					if(array2[j]==IntersectionA[k])
					goto release;
				}
				IntersectionA[p]=array1[i];
				p++;
			}
			release:
			continue;
	  }
  }
}

