#include<stdio.h>
float gravity(float mass);
int main()
{
	float mass;
	printf("ENTER MASS IN KG\n");
	scanf("%f",&mass);
	printf("VALUE OF FORCE IN NEWTON IS %f",gravity(mass));
	return 0;
}
float gravity(float mass)
{
	float m;
	m=mass*9.8;
	return m;
}