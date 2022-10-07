#include<stdio.h>
#include<string.h>
void length(char *str)
{
	for(int i=0;i!='\0';i++)
	{
		str++;
	}
}
int main()
{
	char str[50];
	scanf("%s",str);
	length(str);
	printf("%d",strlen(str));
	
	return 0;
}