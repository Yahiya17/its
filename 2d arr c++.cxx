#include<iostream>
using namespace std;
int main()
{
	int arr[2][9]={
		{1,2,3,4,5,6,7,8,9},
		{10,11,12,13,14,15,16,17,18}
		};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<arr[i][j]<<",";
		}
		cout<<"\n";
	}
	return 0;
}