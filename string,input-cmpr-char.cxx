#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30];
	char str2[30];
	char c;
	int i=0;
	printf("ENTER THE CHARACTER \n");
	scanf("%s",str1);
	printf("ENTER THE CHARACTER ONE BY ONE \n");
	while(c!='\n')
	{
	fflush(stdin);
	scanf("%c",&c);
	str2[i]=c;
	i++;
	}
	str2[i-1]='\0';
printf("VALUE OF STR1 IS %s \n",str1);
printf("VALUE OF STR2 IS %s \n",str2);
printf("%d",strcmp(str1,str2));

}
