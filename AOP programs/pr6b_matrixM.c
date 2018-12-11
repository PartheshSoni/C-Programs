/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 6(b)    Topic: Matrix Multiplication
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
int array1[100][100], array2[100][100];
int n1, n2, n3, n4;
void matrixM(void);
int final[200][200];
int i, j, m=0;

int main(void)
{



  printf("\nEnter the no. of rows and columns for the two matrices respectively:");
  scanf("%d%d%d%d",&n1, &n2, &n3, &n4);

  if(n2==n3)
  {
  printf("\nEnter the elements of the first matrix:");
  for (i=0; i<n1; i++)
  {
    for(j=0; j<n2; j++)
    {
      printf("Row-%d X Col-%d: ", i+1, j+1);
      scanf("%d", &array1[i][j]);
    }
  }

  printf("\nEnter the elements of the second matrix:");
  for (i=0; i<n3; i++)
  {
    for(j=0; j<n4; j++)
    {
      printf("Row-%d X Col-%d ", i+1, j+1);
      scanf("%d", &array2[i][j]);
    }
  }
  matrixM();
}


  else
  {printf("\nMatrix not compatible for multiplication.\n\n");goto exit;}

  printf("\nThe matrix having multiplication of the given two matrices is...\n");
  for(i=0; i<n1; i++)
  {
      for(j=0; j<n4; j++)
      {
        printf("%d\t", final[i][j]);
      }
      printf("\n");
  }


  exit:
  return 0;
}

void matrixM()
{

    for(i=0; i<n1; i++)
	{
		for(j=0; j<n4; j++)
		{ final[i][j]=0;
			for(m=0; m<n2; m++)
			{
				final[i][j]+=array1[i][m]*array2[m][j];
			}
		}
	}
return;
}
