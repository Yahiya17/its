#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age \n";
	cin>>age;
	int i=1;
	do
	{
		cout<<age<<"×"<<age<<" = "<<i*age<<"\n";i++;
	}while(i<=10);
	
    
	return 0;
}