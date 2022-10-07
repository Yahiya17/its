#include<stdio.h>
char string(char *str)
{
	char *ptr=str;
	int len=0;
	while(*ptr !='\0')
	{
		len++;
		ptr++;
	}
	return len;
}
int main()
{
	char str[]="YAHIYA";
	int len=string(str);
	printf("THE LENGTH OF THIS STRING IS %d",len);
}