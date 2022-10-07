#include<stdio.h>
int sum()
{
	int a,b;
	printf("ENTER ANY TWO NUMBERS: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main()
{
	int store=sum ();
	printf("%d ",store);
	return 0;
}