#include<stdio.h>
void change(int a);
int main()
{
	int b=456;
	printf("value of b before change %d\n",b);
	change(b);
	printf("value of b after change %d\n",b);
	return 0;
}
void change(int a)
{
	a=44;
}