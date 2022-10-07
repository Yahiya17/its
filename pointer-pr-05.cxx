#include<stdio.h>
int main()
{
	int i=7;
	int*j=&i;
	int **k=&j;
	printf("VALUE OF I IS %d",**k);
	return 0;
}