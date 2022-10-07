#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<((a>b)? a:b);
	cout<<"\n"<<(true || false);
	cout<<"\n"<<++a;
	cout<<"\n"<<a++;
	cout<<"\n"<<a;
	cout<<"\n"<<(b-=a);
	cout<<"\n"<<(a>b);
	cout<<"\n"<<--a;
	cout<<"\n"<<a--;
	cout<<"\n"<<a;
}
