#include<stdio.h>
void pos_neg(int arr[])
{
	int possitive=0,negative=0,zero=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]>0)
		{
			possitive++;
		}
		else if(arr[i]<0)
		{
			negative++;
		}
		else if(arr[i]==0)
		{
			zero++;
		}
	}
	
	printf("POSITIVE NO=%d   NEGATIVE NO=%d  ZERO IS=%d",possitive,negative,zero);
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	pos_neg(arr);
	return 0;
}