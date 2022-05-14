//Implement scope resolution operator : : for the following uses:
//Class functions defined outside the class
//Access a global variable with same name as a local variable
//Access a static variables
//Not using namespace std
//Use inbuilt libraries (cin cout with scope resolution operator)
#include<iostream>
int x=10;
class student
{
	int rollno;
	char name[20];
	public:
	static int y;
	void enterdetails();
	void display();
};
void student::enterdetails() 
{
	std::cout<<"Roll No.: ";
	std::cin>>rollno;
	std::cout<<"Name: ";
	std::cin>>name;
}
void student::display()
{
	std::cout<<"Roll No.: "<<rollno<<std::endl;
	std::cout<<"Name: "<<name<<std::endl;
}
int student::y=5;
int main()
{
	student s;
	s.enterdetails();
	std::cout<<"Details :"<<std::endl;
	s.display();
	int x=20;
	int y=15;
	std::cout<<"\nGlobal Variable x: "<<::x<<std::endl;
	std::cout<<"Local Variable x: "<<x<<std::endl;
	std::cout<<"\nStatic Variable y: "<<student::y<<std::endl;
	std::cout<<"Local Variable y: "<<y<<std::endl;
	return 0;
}
