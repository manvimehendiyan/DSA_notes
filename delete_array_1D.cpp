#include<iostream>
using namespace std;
int deleteElement(int a[], int pos,int &n)
{
	int temp = a[pos];
	for(int i = pos; i <= n-2; i++)
		a[i] = a[i+1];
	n--;
	return temp;
}
void display(int a[], int n)
{
	for(int i=0;i<n;i++)
		cout<<endl<<a[i]; 
}
int main()
{
	int n,index;
	cout<<"Enter n: ";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter A["<<i<<"]: ";
		cin>>A[i]; 
	}
	cout<<"Enter index no. to be deleted: ";
	cin>>index;
	cout<<"Deleted Element: "<<deleteElement(A,index,n)<<endl;
	display(A,n);
}
