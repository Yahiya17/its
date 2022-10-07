#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]="YAHIYA";
	char *str2="NOOR";
	strcat(str,str2);
	printf("YOUR NAME IS %s",str);
	return 0;
}