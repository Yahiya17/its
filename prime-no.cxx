#include<stdio.h>
int main()
{
	int i,n,prime=1;
	printf("ENTER THE VALUE OF N\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}
		if(prime==0)
		{
			printf("THIS IS NOT A PRIME");
		}
		else
		{
			printf("THIS IS A PRIME");
		}
	
	return 0;
}