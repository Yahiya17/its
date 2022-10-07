#include<stdio.h>
int main()
{
	int arr[3][10];
	int n;
	
	for(int i=0;i<3;i++)
	{
		printf("***MULTIPLICATION TABLE OF***");
		scanf("%d",&n);
		for(int j=0;j<10;j++)
		{
			arr[i][j]=n*(j+1);
			printf("%d×%d=%d\n",n,j+1,arr[i][j]);
		}
		
	}
	return 0;
}