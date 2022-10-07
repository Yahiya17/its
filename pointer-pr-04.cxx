#include<stdio.h>
void sum_avg(int a,int b,int *avg,int*sum)
{
	*sum=a+b;
	*avg=*sum/2;
}
int main()
{
	int a,b,sum,avg;
	printf("ENTER THE VALUE OF A AND B\n");
	scanf("%d %d",&a,&b);
	sum_avg(a,b,&avg,&sum);
	printf("SUM OF A AND B IS %d \n",sum);
	printf("AVERAGE OF A AND B IS %d \n",avg);
	return 0;
	
	
	return 0;
}