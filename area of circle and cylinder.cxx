#include<stdio.h>
int main()
{
	int radius;
	float pie;
	printf("WHAT IS THE RADIUS\n");
	scanf("%d",&radius);
	printf("VALUE OF PIE\n");
	scanf("%f",&pie);
	printf("AREA OF CIRCLE%f\n",pie*radius*radius);
	int height;
	printf("what is height\n");
	scanf("%d",&height);
	printf("AREA OF CYLINDER%f",pie*radius*radius*height);
	return 0;
	
}