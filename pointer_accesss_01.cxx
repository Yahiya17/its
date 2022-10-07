#include<stdio.h>
void location(int *ptr,int a)
{
	for(int i=0;i<a;i++)
	{
		printf("VALUE OF ARR[%d] IS %d\n",i+1,*ptr);
		ptr++;
	}
}
int main()
{
	int arr[]={22,33,44,55,66};
	location(arr,5);
	return 0;
}