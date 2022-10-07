#include<stdio.h>
int main()
{
	int marks[4];
	int *ptr;
	ptr=&marks[0];
	for(int i=0;i<4;i++)
	{
		printf("MARKS OF STUDENT %d IS\n",i+1);
		scanf("%d",&marks[i]);
		ptr++;
	}
	for(int i=0;i<4;i++)
	{
		printf("MARKS OF STUDENT %d IS %d \n",i+1,marks[ i ]);
	}
	
	
}