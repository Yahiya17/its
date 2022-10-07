#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	char op;
	cin>>op;
	switch(op)
	{
		case '+':
		cout<<a+b;
		break;
		case '*':
		cout<<a*b;
		break;
		case '/':
		cout<<a/b;
		break;
		case '-':
		cout<<a-b;
		break;
		default :
		cout<<"Incorrect opperator ";
		break;
	}
	return 0;
}