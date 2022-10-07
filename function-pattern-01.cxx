#include<stdio.h>
void pattern();
int main()
{
	
	pattern();
	return 0;
}
void pattern()
{
	int star;
	scanf("%d",&star);
	for(int i=1;i<=star;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}