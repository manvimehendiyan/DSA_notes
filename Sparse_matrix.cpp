#include<iostream>
using namespace std;
int main()
{
	int m,n,c=0;
	cout<<"Enter no. of rows: ";
	cin>>m;
	cout<<"Enter no. of columns: ";
	cin>>n;
	int A[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cout<<"Enter A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==0)
				c++;
		}
	if(c>((m*n)/2))
	{
		cout<<"Sparse Matrix"<<endl;
	}
	else
		cout<<"Not Sparse Matrix"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
    }
	return 0;
}
