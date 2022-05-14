#include<iostream>
using namespace std;
class Student
{
	char name[20];
	int marks;
	public:
		void getinfo()
		{
			cout<<"Enter Name: ";
			gets(name);
			cout<<"Enter Marks: ";
			cin>>marks;
			cin.get();
		}
		void displayInfo()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Marks : "<<marks<<endl;
		}
};
int main()
{
	//without pointers
	cout<<"WITHOUT USING POINTERS"<<endl;
	Student S[2];
	for( int i=0; i<2; i++ )
	{
		cout<<"Student "<<i+1<<endl;
		S[i].getinfo();
	}
	cout<<endl;
	for( int i=0; i<2; i++ )
	{
		cout<<"Student "<<i+1<<endl;
		S[i].displayInfo();
	}
	
	//using pointers
	cout<<"\nUSING POINTERS"<<endl;
	Student *T[2];
	for( int i=0; i<2; i++ )
		T[i]=new Student;
	for( int i=0; i<2; i++ )
	{
		cout<<"Student "<<i+1<<endl;
		S[i].getinfo();
	}
		cout<<endl;
	for( int i=0; i<2; i++ )
	{
		cout<<"Student "<<i+1<<endl;
		S[i].displayInfo();
	}
	for( int i=0; i<2; i++ )
		delete T[i];
	return 0;
}
