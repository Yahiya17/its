#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	int word=1;
	char c;
	printf("ENTER YOUR STRING \n");
	gets(st);
	printf("Your string is %s \n",st);
	int l=strlen(st);
	for(int i =0;i<l/2;i++)
	{
		c=st[i];
		st[i]=st[l-1-i];
		st[l-1-i]=c;
	}
	printf("Reversed string is %s",st);
	return 0;
}