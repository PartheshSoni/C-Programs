/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 9(b)    Topic: Addition of two times
 DOS:                   DOC:
 *********************************************************************************/

#include <stdio.h>

struct time
{
  int hr;
  int min;
  int sec;
  float combo;
}t1, t2, *pt1, *pt2;

void main()
{
  pt1=&t1;
  printf("\nEnter two times with format: (hours) (minutes) (seconds)\ntime 1:");
  scanf("%d %d %d", &pt1->hr, &pt1->min, &pt1->sec);
  printf("time 2:");
  pt2=&t2;
  scanf("%d %d %d", &pt2->hr, &pt2->min, &pt2->sec);

  void add(struct time *pt1,struct time *pt2);
  add(pt1, pt2);

  printf("\nThe time difference is %dhr%s %dmin%s %dsec%s.\n", pt1->hr, ((pt1->hr)==1?"":"s"), pt1->min, ((pt1->min)==1?"":"s"),  pt1->sec, ((pt1->sec)==1?"":"s"));
  return;
}

void add(struct time *pt1,struct time *pt2)
{
  float result;
  pt1->combo=(pt1->hr*3600+pt1->min*60+pt1->sec);
  pt2->combo=pt2->hr*3600+pt2->min*60+pt2->sec;
  result= pt1->combo- pt2->combo;
  
  if(result<0)
  {
      result=-(result);
  }
  
  pt1->hr=result/3600;
  pt1->min=(result-pt1->hr)/60;
  pt1->sec=result-(pt1->hr)-(pt1->min);

 
  while(pt1->sec>59)
  {
    if(pt1->sec>59)
    {
     pt1->sec=(pt1->sec)-60;
      (pt1->min)++;
    }
  }

  while(pt1->min>59)
  {
    if(pt1->min>59)
    {
     pt1->min=(pt1->min)-60;
      (pt1->hr)++;
    }
  }
  return;
}
