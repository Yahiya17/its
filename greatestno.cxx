#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("ENTER THE NUMBER\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("GRETEST NO IS  %d",a);
	}
	else if(b>c&&b>d)
	{
		printf("GREATEST NO IS  %d ",b);
	}
	else if(c>d)
	{
		printf("GREATEST NO IS  %d",c);
	}
	else
	{
		printf("GREATEST NO IS  %d",d);
	}
	return 0;
}