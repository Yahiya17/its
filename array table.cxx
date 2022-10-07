#include<stdio.h>
int main()
{
	int mul[10];
	for(int i=0;i<10;i++)
	{
		int n;
		scanf("%d",&n);
	
		mul[i]=n*(i+1);
		printf("%d X %d = %d\n",n,i+1,mul[i]);
	}
}