#include<iostream>
using namespace std;
int main()
{
	
	int n,mid;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star plus
	mid=(1+n)/2;
	for(int i=1;i<=n;i++)	//rows
	{
		for(int j=1;j<=n;j++)	//cols
		{
			 if(i==mid || j==mid)
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
