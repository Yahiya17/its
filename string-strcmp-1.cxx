#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]="NOOR";
	char *str2="NOOR";
	int a=strcmp(str,str2);
	printf("YOUR VALUE IS %d",a);
}