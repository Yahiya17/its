#include<stdio.h>
int main()
{
	int physics,chemistry,maths;
	float total;
	printf("ENTER YOUR PHYSICS MARKS\n");
	scanf("%d",&physics);
	printf("ENTER YOUR CHEMISTRY MARKS\n");
	scanf("%d",&chemistry);
	printf("ENTER YOUR MATHS MARKS\n");
	scanf("%d",&maths);
	total=(physics+chemistry+maths)/3;
	if(total<44||physics<33||chemistry<33||maths<33)
	{
		printf("YOU ARE FAILED%f",total);
	}
	else
	{
		printf("YOU ARE PASSED%f",total);
	}
}