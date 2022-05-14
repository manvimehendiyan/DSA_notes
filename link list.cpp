#include<iostream>
using namespace std;
struct linklist
{
	int item;
	struct linklist *next;
};
typedef struct linklist node;
node *head=NULL;

int main()
{
	int choice;
	void create();
	void display();
	do
	{
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1: create();
				break;
			case 2: display();
			    break;
			case 3: break;
		}
	}while(choice!=3);
	return 0;
}
void create()
{
	if(head=NULL)
	{
		head=new node;
		cin>>head->item;
		head->next=NULL;
	}
	else
	{
		node *p=head;
		while(p->next!=NULL)
		p=p->next;
	}
}
void display()
{
	cout<<head->item;
}
