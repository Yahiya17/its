#include<stdio.h>
int main()
{
	int marks;
	printf("ENTER YOUR MARKS\n");
	scanf("%d",&marks);
	if(marks>=90&&marks<=100)
	{
		printf("A");
	}
    else if(marks>=80&&marks<=89)
	{
		printf("B");
	}
    else if(marks>=70&&marks<=79)
	{
		printf("C");
	}
    else if(marks>=60&&marks<=69)
	{
	
		printf("D");
	}
     else
	{
		printf("F");
	}
}