#include<stdio.h>
int main()
{
	int arr[]={10,15,16,17,18};
	int *ptr=&arr[0];
	int *q=&arr[3];
	printf("VALUE OF PTR IS %u\n",ptr);
	printf("VALUE OF PTR IS %u\n",q);
	printf("VALUE OF PTR AFTER SUBTACTION  IS %d\n",ptr-q);
	printf("VALUE OF PTR AFTER SUBTACTION  IS %d\n",q-ptr);
	return 0;
}