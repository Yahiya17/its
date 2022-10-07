#include<stdio.h>
#include<string.h>
struct employee
{
	int code;
	float salary;
	char name;
};
int main()
{
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	(*ptr).code=500;
	printf("%d\n",(*ptr).code);
	ptr->code=500;
	printf("%d",ptr->code);
	
	
	return 0;
}