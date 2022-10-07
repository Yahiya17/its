#include<stdio.h>
int main()
{
	int marks[5];
	for(int i=0;i<5;i++)
	{
		printf("ENTER THE MARKS OF STUDENT %d IS\n",i+1);
		scanf("%d",&marks[i]);
		
	}
	for(int i=0;i<5;i++)
	{
		printf("MARKS OF STUDENT %d IS %d\n",i+1,marks[i]);
	}
}