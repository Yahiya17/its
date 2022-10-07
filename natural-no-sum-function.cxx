#include<stdio.h>
int sum(int n);
int main()
{
	int n ,s;
	printf("ENTER THE VALUE OF N\n");
	scanf("%d",&n);
	s=sum(n);
	printf("VALUE OF S IS %d",s);
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}