#include<stdio.h>
int fibonnaci(int n);
int main()
{
	int n;
	printf("ENTER THE VALUE OF N \n");
	scanf("%d",&n);
	printf("FIBONACCI VALUE OF %d IS %d",n,fibonnaci(n));
	return 0;
}
int fibonnaci(int  n)
{
	int fib;
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}	
	else
	{
	fib=fibonnaci(n-1)+fibonnaci(n-2);
	}
	return fib;
	
}