#include<stdio.h>
#include<string.h>
int main()
{
	char st[30];
	printf("Enter Your Name\n");
     gets(st);
	for(int i=0;st[i]!='\0';i++)
	{
		if(st[i]>='A'&&st[i]<='Z')
		{
			st[i]=st[i]+32;
		}
	else if(st[i]>='a'&&st[i]<='z')
		{
			st[i]=st[i]-32;
		}
	}
	printf("%s",st);
	
	return 0;
}