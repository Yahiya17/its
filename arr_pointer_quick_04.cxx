#include<stdio.h>
int main()
{
	int arr[]={11,22,33};
	int *a=&arr[1];
	int *b=&arr[2];
	printf("VALUE OF arr[1] IS %d \n",arr[1]);
	printf("VALUE OF arr[2] IS %d \n",arr[2]);
	printf("VALUE OF arr[1] IS %d \n",*a);
	printf("VALUE OF arr[2] IS %d \n",*b);
	b=b-1;
	printf("VALUE OF arr[2] IS %d \n",*b);
	return 0;
}