#include<iostream>
using namespace std;
int main()
{
	
	int n,m;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star Hollow rectangle
	for(int i=1;i<=n;i++)	//rows
	{
		for(int j=1;j<=n-i;j++)	//cols  //star
		{
			 cout<<" ";
			
		}
		
		for(int j=1;j<=n;j++)	//cols  //star
		{
			 cout<<"*";
			
		}
		cout<<endl;
	
	}
}
