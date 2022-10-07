#include<stdio.h>
int times(int i)
{
	if(i==0)
	{
		return 0;
	}
	else
	{
		return i*10;
	}
}
int main()
{
	int i;
	printf("ENTER THE VALUE OF I :");
	scanf("%d",&i);
	printf("VALUE OF I IS %d",times(i));
	return 0;
}