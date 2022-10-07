#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("KITNE SAAL KE HO...!\n");
	scanf("%d",& marks);
	if (marks==100)
	{
		printf("GENIUS");
	}
	if(marks>=80)
	{
		printf("FIRST");
	}
	if(marks<=35)
	{
		printf("PADHAI DHAYAN SE KRO");
	}
}