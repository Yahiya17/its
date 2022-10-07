#include<stdio.h>
int main()
{
	int i,n, sum=0;
	printf("enter the value of N\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,i*n);
		
		sum +=n*i;
	}
	printf("SUM OF I IS %d",sum);
}