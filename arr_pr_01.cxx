#include<stdio.h>
int main()
{
	int arr[]={11,12,13,14,15,16,17,18,19,20};
	int *ptr=arr;
	printf("VALUE OF PTR IS %d \n",*ptr);
	printf("VALUE OF ARR[2] IS %d \n",arr[2]);
	ptr=ptr+2;
	printf("VALUE OF PTR IS %d \n",*ptr);
	return 0;
}