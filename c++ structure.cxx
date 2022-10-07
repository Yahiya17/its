#include<iostream>
using namespace std;
struct employee
{
	int id;
	float salary;
	char al;
};
int main()
{
	struct employee e1;
	e1.id=101;
	e1.salary=12.5;
	e1.al='*';
	cout<<e1.id<<endl;
	cout<<e1.salary<<endl;
	cout<<e1.al<<endl;
	return 0;
}