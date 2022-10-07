#include<stdio.h>
void change(int *a,int *b);
int main()
{
	int a=5,b=6;
	printf("VALUE BEFORE CHANGE A %d B %d\n",a,b);    change(&a,&b);
	printf("THE VALUE AFTER CHANGE IS A %d B %d\n",a,b);
}
void change(int *a,int *b)
{
	int y;
	y=*a;
	*a=*b;
	*b=y;
}