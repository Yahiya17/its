#include<stdio.h>
#include<string.h>
struct employe
{
	int code;
	float salary;
	char name[10];
};
int main()
{
	int a=5;
	float b=34.5;
	char c='k';
	struct employe e1;
	
	e1.code=456;
	e1.salary=665.8;
	strcpy(e1.name,"YAHIYA");
	printf("%d\n",e1.code);
	printf("%f\n",e1.salary);
	printf("%s\n",e1.name);
	
}