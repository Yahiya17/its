#include<iostream>
using namespace std;
int main()
{
	int arr[15];
		for(int i=1;i<=15;i++)
		{
			cout<<"Marks of student  "<<i<<" :";
			cin>>arr[i];
		}
		for(int i=1;i<=15;i++)
		{
			
			cout<<"Marks of student "<<i<<" :"<<arr[i]<<"\n";
		}
		
	return 0;
}