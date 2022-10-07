#include<stdio.h>
int main()
{
	int principal;
	int rate;
	int year;
	printf("WHAT IS PRINCIPAL\n");
	scanf("%d",&principal);
	printf("WHAT IS RATE\n ");
	scanf("%d",&rate);
	printf("WHAT IS YEAR\n");
	scanf("%d",&year);
	printf("INTEREST RATE %d",principal*rate*year);
	return 0;
	
}