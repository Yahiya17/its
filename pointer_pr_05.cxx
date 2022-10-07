#include<stdio.h>
void reverse(int arr[])
{
	for(int i=0;i<7;i++)
	{
		printf("INPUTED ARRAY IS %d  REVSE ARRAY IS %d\n",i+1,arr[6-i]);
	}
}
int main()
{
	int arr[7];
	for(int i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr);
	return 0;
}