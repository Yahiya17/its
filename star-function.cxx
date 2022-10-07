#include<stdio.h>
void star(int n);
int main()
{
	int n;
	printf("ENTER THE VALUE OF N");
	scanf("%d",&n);
	star(n);
	return 0;
}
void star(int n)
{
	if(n==1)
	{
		printf("*\n");
		return ;
	}
	star(n-1);
	for(int i=0;i<(2*n-1);i++)
	{
		printf("*");
	}
	printf("\n");
}