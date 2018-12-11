/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 8(b)    Topic: Distance addition for two given lengths
 DOS:                   DOC:
 *********************************************************************************/

#include <stdio.h>

struct distance
{
 	int feet;
	float inch;
};

void main()
{
	struct distance dis1, dis2;

	void add(struct distance dis1, struct distance dis2);
	printf("\nEnter the first distance in feet and inches (leaving space inbetween):");
	scanf("%d%f", &dis1.feet, &dis1.inch);

	printf("\nEnter the second distance in feet and inches:");
	scanf("%d%f", &dis2.feet, &dis2.inch);

	add(dis1, dis2);

	return;
}

void add(struct distance dis1, struct distance dis2)
{
	struct distance result;

	result.feet=dis1.feet+dis2.feet;
	result.inch=dis1.inch+dis2.inch;

	while(result.inch>11)
	{
		if(result.inch>11)
    {
      result.inch=result.inch-12.00;
      result.feet++;
    }
  }

  printf("\nThe Summation of the given distances is %d feets and %.2f inches.\n\n", result.feet, result.inch);

  return;
}
