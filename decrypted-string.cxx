#include<stdio.h>
void decrypt(char *c)
{
	char*ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr-1;
		ptr++;
	}
}
int main()
{
	char c[]="ZBIJZB";
	decrypt(c);
	printf("DECRYPTED STRING IS %s",c);
	
}