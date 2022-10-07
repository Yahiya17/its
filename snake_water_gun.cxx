#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp)
{
	if(you==comp)
	{
		return 0;
	}
	if(you=='s'&&comp=='g')
	{
		return -1;
	}
	else if(you=='g'&&comp=='s')
	{
		return 1;
	}
	if(you=='s'&&comp=='w')
	{
		return 1;
	}
	else if(you=='w'&&comp=='s')
	{
		return -1;
	}
	if(you=='g'&&comp=='w')
	{
		return -1;
	}
	else if(you=='w'&&comp=='g')
	{
		return 1;
	}
}
int main()
{
	char you,comp;
	srand(time(0));
	int number=rand()%100+1;
	
	if(number<33)
	{
		comp='s';
	}
	else if(number>33&&number<66)
	{
		comp='w';
	}
	else
	{
		comp='g';
	}
	printf("ENTER 'S' FOR SNAKE 'W' FOR WATER 'G' FOR GUN\n ");
	scanf("%c",&you);
	int result=snakewatergun(you,comp);
	printf("YOU CHOOSE %c AND COMPUTER CHOOSE %c\n",you,comp);
	if(result==0)
	{
		printf("GAME OVER!\n");
	}
	else if(result==1)
	{
		printf("YOU WIN\n");
	}
	else
	{
		printf("YOU LOSE");
	}
	return 0;
}