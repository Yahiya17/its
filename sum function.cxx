#include<stdio.h>
int sum(int a,int b);
int main()
{
	int c;
	c=sum(2,5);
	printf("VALUE OF C IS %d",c);
	return 0;
	
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}