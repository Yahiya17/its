#include<stdio.h>
void present(char *ptr,char c)
{
	if(*ptr==c)
	{
		printf("THIS IS PRESENT IN STRING");
	}
	else
	{
		printf("THIS IS NOT PRESENT IN STRING");
	}
}
int main()
{
	char str[20]="yahiya";
	present(str,'T');
	return 0;
}