#include<stdio.h>
struct employe
{
	int code;
	float salary;
	char name[10];
};
int main()
{
	struct employe e1,e2,e3;
	printf("ENTER YOUR CODE : ");
	scanf("%d",&e1.code);
	printf("ENTER YOUR SALARY : ");
	scanf("%f",& e1.salary);
	printf("ENTER YOUR NAME : ");
	scanf("%s",&e1.name);
	
	printf("ENTER YOUR CODE : ");
	scanf("%d",&e2.code);
	printf("ENTER YOUR SALARY : ");
	scanf("%f",& e2.salary);
	printf("ENTER YOUR NAME : ");
	scanf("%s",&e2.name);
	
	printf("ENTER YOUR CODE : ");
	scanf("%d",&e3.code);
	printf("ENTER YOUR SALARY : ");
	scanf("%f",& e3.salary);
	printf("ENTER YOUR NAME : ");
	scanf("%s",&e3.name);
	
}