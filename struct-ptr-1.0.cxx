#include<stdio.h>
#include<string.h>
struct employee
{
	int code;
	float salary;
	char name[50];
};
int main()
{
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	ptr->code=101;
	printf("%d\n",e1.code);
	ptr->salary=54.5;
	printf("%f\n",e1.salary);
	strcpy(ptr->name,"YAHIYA");
	printf("%s",e1.name);
}