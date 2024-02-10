#include<iostream>
using namespace std;
int main()
{
	int arr[2][3];
	int arr2[2][3];
	 
	 cout<<"Enter First 2D Array ele:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}		
	
	cout<<"Enter second 2D Array ele:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
		cout<<endl;
	}		
	
	
	 cout<<"Your first 2D Array ele:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}		
	
	cout<<"Your second 2D Array ele:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Sum of two array elements are:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
			
}
