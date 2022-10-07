#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,attempt=1;
	srand(time(0));
	number=rand()%100;
	do
	{
		printf("ENTER YOUR NUMBER\n");
		scanf("%d",&guess);
		if(guess>number)
		{
			printf("LOWER NO PLEASE\n");
		}
		else if(guess<number)
		{
			printf("GREATER NO PLEASE\n");
		}
		else if(attempt)
		{
			printf("NO OF ATTEMPTS IS %d\n",attempt);
		}
		attempt++;
	}
	while(guess != number);
	return 0;
		
}