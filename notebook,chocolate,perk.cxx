#include<stdio.h>
int main()
{
	int maths,science;
	float notebook,chocolate,perk;
	printf("ENTER YOUR MATHS  MARKS\n");
	scanf("%d",&maths);
	printf("ENTER YOUR SCIENCE MARKS\n");
	scanf("%d",&science);
	notebook=(maths+science)/2;
	chocolate=(maths)/1;
	perk=(science)/1;
	
	if(maths>=33&&science>=33)
	{
		printf("YOUR GIFT IS NOTEBOOK %f",notebook);
	}
	else if(maths>=33&&science<33)
	{
		printf("YOUR GIFT IS CHOCOLATE %f",chocolate);
	}
	else if(maths<33&&science>=33)
	{
		printf("YOUR GIFT IS PERK %f",perk);
	}
	return 0;
}