#include<iostream>
using namespace std;
namespace n1
{
	int x=10;
	void display()
	{
		cout<<"n1"<<endl;
	}
}
namespace n2
{
	int x=20;
	void display()
	{
		cout<<"n2"<<endl;
	}
}
int main()
{
	n1::display();
	n2::display();
	cout<<"x from namespace n1 = "<<n1::x<<endl;
	cout<<"x from namespace n2 = "<<n2::x<<endl;
	return  0;
}
