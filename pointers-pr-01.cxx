#include<stdio.h>
int main()
{
	int i=7;
	printf("ADDRESS OF I IS %u\n",&i);
	printf("VALUE OF I IS %d\n",*(&i));
	return 0;
}