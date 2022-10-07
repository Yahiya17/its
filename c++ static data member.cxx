#include<iostream>
using namespace std;
class employee{
	int id;
	static int count;
	public:
	void setdata(void){
		cout<<"Enter the id : "<<endl;
		cin>>id;
		count ++;
	}
	void getdata(void){
		cout<<"The id of this employee is "<<id <<" and this is employee number "<<count<<endl;
	}
	static void getcount(void)
	{
		cout<<"The value of count is "<<count<<endl;
	}
	
};
int employee:: count;
int main()
{
	employee harry,rohan,lovish;
	harry.setdata();
	harry.getdata();
	employee:: getcount();
	
	rohan.setdata();
	rohan.getdata();
	employee:: getcount();
	
	lovish.setdata();
	lovish.getdata();
	employee:: getcount();
	return 0;
}