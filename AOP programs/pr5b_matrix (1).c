/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 5(b)    Topic: Matrix operations
 DOS:                   DOC:
 *********************************************************************************/


#include<stdio.h>
#include<math.h>

int main(void)
{
  int n, i, j, check;
  printf("\nEnter the commom order of the square matrix (n):");
  scanf("%d", &n);
  
  int matrix[n][n];
  
  for(i=0; i<n; i++)
  {
	for(j=0; j<n; j++)
	{
		printf("\nMatrix[%d][%d]=", i+1, j+1);
		scanf("%d", &matrix[i][j]);
	}
	printf("\n");
 

  printf("\nThe original matrix is...\n");
   for(i=0; i<n; i++)
  {
        for(j=0; j<n; j++)
        {
                printf("%d\t", matrix[i][j]);
        }
        printf("\n");
  }
  int transpose[n][n];
  printf("\nThe transposed matrix is...\n");
  for(i=0; i<n; i++)
  {
	for(j=0; j<n; j++)
	{
		transpose[i][j]=matrix[j][i];
		printf("%d\t", transpose[i][j]);
 	}
	printf("\n"); 
 }

  printf("\n\n");
  check=1;
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
     {
       if(matrix[i][j]!=transpose[i][j])
       check=0;
   
       if(check==0)
       break;
     }
  }

  if(check==1)
  printf("\nYou have entered symmetrical matrix.");

  else
  printf("\nYou have entered asymmetrical matrix.");
  
  printf("\n\n");  
   



  
  return 0;
}


