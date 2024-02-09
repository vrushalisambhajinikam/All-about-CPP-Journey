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
		for(int j=1;j<=n-i+1;j++)	//cols  //star
		{
			 cout<<" ";
			
		}
		
		for(int j=1;j<=i;j++)	//cols  //star
		{
			 cout<<j;
			
		}
		cout<<endl;
	
	}
}
