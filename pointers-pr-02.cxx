#include<stdio.h>
void add(int i)
{
	printf("ADDRESS OF I IS %u\n",&i);
}
int main()
{
	int i;
	printf("ADDRESS OF I IS %u\n",&i);
	add(i);
	return 0;
}
