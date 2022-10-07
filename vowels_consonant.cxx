#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	int v=0,c=0;
	printf("ENTER YOUR STRING \n");
	gets(st);
	for(int i=0;st[i]!='\0';i++)
	{
		      if((st[i]=='A'||st[i]=='a')||(st[i]=='E'||st[i]=='e')||(st[i]=='I'||st[i]=='i')||(st[i]=='O'||st[i]=='o')||(st[i]=='U'||st[i]=='u'))
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("No. of vowels %d \n",v);
	printf("No. of consonent %d\n",c);
	return 0;
}