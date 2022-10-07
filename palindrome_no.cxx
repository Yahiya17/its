#include<stdio.h>
int main()
{
	int num,rem,result=0;
	printf("NETER THE NUMBER : ");
	scanf("%d",&num);
	int q=num;
	while(q!=0)
	{
		rem=q%10;
		result=result*10+rem;
		q=q/10;
	}
	printf("%d\n",result);
	if(result==num)
	{
		printf("ITS A PALINDROME");
	}
	else
	{
		printf("ITS NOT A PALINDROME");
	}
	
	return 0;
}