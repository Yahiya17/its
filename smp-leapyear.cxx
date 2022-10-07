#include<stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR\n");
	scanf("%d",&year);
	if(year%100==0 && year%400==0 || year%4==0 && year%100!=0)
	{
		printf("THIS IS A LEAP YEAR ");
	}
	else
	{
		printf("THIS IS NOT A LEAP YEAR");
	}
	return 0;
}