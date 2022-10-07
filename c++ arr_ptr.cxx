#include<iostream>
using namespace std;
int main()
{
	int arr[]={23,34,56,78};
	int *ptr=arr;
	for(int i=0;i<4;i++)
	{
		cout<<"Value at arr"<< i <<"is " <<ptr[i]<<endl;
	}
	return 0;
}