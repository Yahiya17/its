#include<stdio.h>
void times(int a,int *mul)
{
	int j=10;
	*mul=a*j;
}
int main()
{
	int a=5,mul;
	times(a,&mul);
	printf("VALUE OF A IS %d",mul);
}