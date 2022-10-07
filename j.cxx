#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("enter array elements");
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//column
		{
			scanf("%d",a[i][j]);
		}
	}
	printf("matrix elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i] [j]);
		}
		printf("\n");
	}
	return 0;
}
