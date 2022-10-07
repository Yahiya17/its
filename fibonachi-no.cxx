#include<stdio.h>
int fib(int n);
int main()
{
	int  n;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&n);
	printf("VALUE OF FIBONACHI NUMBER %d",fib(n));
}
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
