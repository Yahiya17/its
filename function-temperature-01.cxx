#include<stdio.h>
float temprature(float celcius);
int main()
{
	float celcius;
	printf("ENTER THE VALUE OF CELCIUS\n");
	scanf("%f",&celcius);
	printf("CELCIUS %f INTO FAHRENHEIT IS %.2f",celcius,temprature(celcius));
	return 0;
}
float temprature(float celcius)
{
	float fahrenheit;
	fahrenheit=(celcius*9/5)+32;
	return fahrenheit;
}