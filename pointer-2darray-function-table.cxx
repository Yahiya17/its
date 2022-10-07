#include<stdio.h>
void table(int *multable, int num,int n)
{
	printf("MULTIPLICATIOM TABLE OF %d\n",num);
	for(int i=0;i<n;i++)
	{
	multable[i]=num*(i+1);
	}
	for(int i=0;i<n;i++)
	{
	printf("%d X %d = %d \n",num,i+1,multable[i]);
	}
	printf("**********************************\n");
	
}
int main()
{
	int multable[3][10];
	table(multable[0],2,10);
	table(multable[1],7,10);
	table(multable[2],9,10);
	
}