#include<stdio.h>
#include<string.h>
int main()
{
	char st[50];
	int alp=0,dig=0,sch=0;
	printf("ENTER THE STRING\n");
	gets(st);
	for(int i=0;st[i]!='\0';i++)
	{
		if((st[i]>='a'&&st[i]<='z')||(st[i]>='A'&&st[i]<='Z'))
		{
			alp++;
		}
		else if(st[i]>='0'&&st[i]<='9')
		{
			dig++;
		}
		else
		{
			sch++;
		}
	}
	printf("No. of alphabets is : %d\n",alp);
	printf("No. of digits is : %d\n",dig);
	printf("No. of special character is : %d\n",sch);
	return 0;
}