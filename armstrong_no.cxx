#include<stdio.h>
int main()
{
	int n,c,rem,arm=0;
	printf("Enter a number");
	scanf("%d",&n);
	c=n;
	while(n!=0)
	{
		rem=n%10;
		arm=(rem*rem*rem)+arm;
		n=n/10;
	}
	if(c==arm)
	{
		printf("Armstrong no");
	}
	else
	{
	printf	("Not an armstrong no");
	}
	return 0;
}