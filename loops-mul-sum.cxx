#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("MULTIPLICATION TABLE OF :");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
		sum+=i*n;
	}
	printf("SUM OF MULTIPLICATION TABLE OF %d = %d",n,sum);
       
	return 0;
}