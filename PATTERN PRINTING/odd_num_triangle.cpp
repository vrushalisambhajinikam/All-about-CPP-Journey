#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star triangle
	
//	for(int i=1;i<=n;i++)	//rows
//	{
//		for(int j=1;j<=i;j++)	//cols
//		{
//			cout<<2*j-1<<" ";
//		}
//		cout<<endl;
//	}
//	
//		OR	
//
//	for(int i=1;i<=n;i++)	//rows
//	{
//		for(int j=1;j<=2*i-1;j+=2)	//cols
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;	
//	}
	
//		OR
//
	for(int i=1;i<=n;i++)	//rows
	{
		int a=1;
		for(int j=1;j<=i;j++)	//cols
		{
			cout<<a<<" ";
			a+=2;
		}
		cout<<endl;	
	}
	
}
