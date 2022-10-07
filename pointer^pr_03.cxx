#include<stdio.h>
void mul(int i,int *times)
{
	*times=i*10;
}
int main()
{
	int i,times;
	printf("ENTER THE VALUE OF I :");
	scanf("%d",&i);
	mul(i,&times);
	printf("VALUE OF I TEN TIMES IS %d",times);
	return 0;
}