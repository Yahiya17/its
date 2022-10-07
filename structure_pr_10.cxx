#include<stdio.h>
typedef struct time
{
	int hour;
	int minute;
	int second;
}time;
void display(time d)
{
	printf("THE TIME IS %d:%d:%d \n",d.hour,d.minute,d.second);
}
int timecmp(time d1,time d2)
{
	if(d1.second>d2.second)
	{
		return 1;
	}
	if(d1.second<d2.second)
	{
		return -1;
	}
	if(d1.minute>d2.minute)
	{
		return 1;
	}
	if(d1.minute<d2.minute)
	{
		return -1;
	}
	if(d1.hour>d2.hour)
	{
		return 1;
	}
	if(d1.hour<d2.hour)
	{
		return -1;
	}
	return 0;
}
int main()
{
	time d1={21,45,34};
	time d2={21,45,34};
	display(d1);
	display(d2);
	int a=timecmp(d1,d2);
	printf("TIME COMPARISON FUNCTION RETURNS %d",a);
	return 0;
}