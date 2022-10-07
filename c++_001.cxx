using namespace std;
#include<iostream>
class student
{
public:
int id;
string name;
void put_details(int i, string n)
{
	id= i;
	name= n;
	}	
void get_details()
{
	cout<<"Id :"<<id;
	cout<<"\nName "<<name;
	}	
};
int main()
{
	student s1;
	int i;
	string n;
	cout<<"Enter your Id .";
	cin>>i;
		cout<<"Enter your Name.";
	cin>>n;
	s1.put_details(i,n);
	s1.get_details();
}