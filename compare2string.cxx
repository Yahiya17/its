#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[40];
	
	puts("ENTER ANY STRING: ");
	gets(str);//input
	puts("ENTER ANY STRING 2: ");
	gets(str2);//input
	if(strcmp(str,str2)==0)
	puts("YES");
	else
	puts("NO");
	return 0;
}