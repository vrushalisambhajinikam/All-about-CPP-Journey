#include<iostream>
using namespace std;
int main()
{
	
	int n,m;
	cout<<"Enter no of rows:";
	cin>>n;
	cout<<"Enter no of cols:";
	cin>>m;
	
	//make star Hollow rectangle
	for(int i=1;i<=n;i++)	//rows
	{
		for(int j=1;j<=m;j++)	//cols
		{
			 if(i==1 || i==n ||j==1 ||j==m)
			 {
			 	cout<<"*"<<" ";
			 }
			 else
			 {
			 	cout<<" "<<" ";
			 }
		}
		cout<<endl;
	
	}
}
