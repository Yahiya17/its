#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("ENTER THE VALUE OF N \n");
	scanf("%d",&n);
	printf("SUM OF N NATURAL NUMBER IS %d",sum(n));
	return 0;
}
int sum(int n)
{
	int first;
	first=n*(n+1)/2;
	return first;
}