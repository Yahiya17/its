#include<stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR\n");
	scanf("%d",&year);
	if(year%4==0)
	{
	if(year%100==0)
	{
		if(year%400==0)
			printf("YES");
		else
			printf("NO");
	}
	else
	printf("LEAP YEAR");
	}
	else
	printf("NO");
	}
