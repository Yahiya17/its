#include<stdio.h>
void pattern()
{
	int i,j,rows,cols;
	printf("ENTER THE ROWS :");
	scanf("%d",&rows);
	printf("ENTER THE COLS :");
	scanf("%d",&cols);
	int a[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ,",a[i][j]);
		}
		printf("\n");
	}			
}
int main()
{
	
	pattern();
	return 0;
}