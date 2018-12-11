/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 8(a)    Topic: Employee NET salary calculation
 DOS:                   DOC:
 *********************************************************************************/



#include <stdio.h>
#include <string.h>

#define n 10 
struct employee
{

	double total;
	double basic;
	double da;
	double hra;
	int ta;
	double net;
	double itax;
};

void main()
{
	struct employee e[n];
	int i=0;

	printf("\nEnter the Basic salary of the\n");

	for(i=0; i<n; i++)
	{
		printf("Employee %d: ", i+1);
		scanf("%lf", &e[i].basic);
		e[i].ta=400;  			        
		e[i].da = (0.5)*e[i].basic;
		e[i].hra = (0.15)*e[i].basic;
		e[i].total = e[i].basic + e[i].da + e[i].hra + e[i].ta;
		e[i].itax = (.05)*e[i].total;
		e[i].net = e[i].total - e[i].itax;
	}

	printf("\nThe Net salary of the\n");
	for(i=0; i<n; i++)
	{
		printf("Employee %d = %.2lf\n", i+1, e[i].net);
	}
return;
}
