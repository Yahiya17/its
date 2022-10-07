#include<stdio.h>
void encrypt(char *c)
{
	char*ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr+1;
		ptr++;
	}
}
int main()
{
	char c[]="YAHIYA";
	encrypt(c);
	printf("ENCRYPTED STRING IS %s",c);
	
}