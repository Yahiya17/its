#include<stdio.h>
int main()
{
	int marks;
	printf("ENTER YOUR MARKS\n");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 10:
		case 9:
		printf("YOUR GRADE IS A");
		break;
		case 8:
		printf("YOR GRADE IS B");
		break;
		case 7:
		printf("YOUR GRADE IS C");
		break;
		case 6:
		printf("YOUR GRADE IS D");
		break;
		default:
		printf("YOUR GRADE IS F");
		break;
		
	}
}
