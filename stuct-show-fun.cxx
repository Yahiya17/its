#include<stdio.h>
#include<string.h>
struct employee
{
	int code;
	float salary;
	char name[10];
};
void show(struct employee emp)
{
	printf("YOUR CODE IS  : %d\n",emp.code);
	printf("YOUR SALARY IS  : %f\n",emp.salary);
	printf("YOUR NAME IS : %s ",emp.name);
	
}

int main()
{
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	ptr->code=100;
	ptr->salary=455.5;
	strcpy(ptr->name,"YAHIYA");
	show(e1);
	
}