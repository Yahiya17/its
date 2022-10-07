#include<iostream>
using namespace std;
class emp
{
	private :
	int a,b,c;
	public :
	int d,e;
void	put(int a1, int b1, int c1);
void	get()
{
	cout<<a<<"\n";
	cout<<b<<"\n";
	cout<<c<<"\n";
	cout<<d<<"\n";
	cout<<e;
}
};
void emp :: put(int a1, int b1, int c1)
{
	 a=a1,b=b1,c=c1;
}
int main()
{
	emp mohan;
	mohan.d=5;
	mohan.e=8;
	mohan.put(4,7,9);
	mohan.get();
	return 0;
}