#include<iostream>
using namespace std;
int main()
{
	int n,j=0,k=0;
	cout<<"Enter no. of elememts: ";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter A["<<i<<"]: ";
		cin>>A[i];
	}
	int odd_array[n], even_array[n];
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
			even_array[j++]=A[i];
		else
			odd_array[k++]=A[i];	
	}
	cout<<"Odd_array: "<<endl;
	for(int i=0;i<j;i++)
		cout<<odd_array[i]<<endl;
	cout<<"Even_array: "<<endl;
	for(int i=0;i<k;i++)
		cout<<even_array[i]<<endl;
	return 0;
}
