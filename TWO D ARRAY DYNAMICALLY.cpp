#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<<"Enter the number of rows ";
	cin>>n;
	cout<<"Enter the number of columns ";
	cin>>m;
	int **arr;
	arr=new int *[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int i=0;i<m;i++)
		{
			cout<<" "<<arr[i][j]<<" ";
		}
	}
	
}
