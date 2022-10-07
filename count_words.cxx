#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	int word=1;
	printf("ENTER YOUR STRING \n");
	gets(st);
	for(int i =0;st[i]!='\0';i++)
	{
		if(st[i]==' ')
		{
			word++;
		}
	}
	printf("No.of words %d",word);
	return 0;
}