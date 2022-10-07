#include<stdio.h>
int main()
{
	int i=5;
	int *ptr=&i;
	printf("VALUE OF PTR IS %u\n",ptr);
	ptr=ptr+1;
	printf("VALUE OF PTR AFTER ADDITION IS %u\n",ptr);
	return 0;
}