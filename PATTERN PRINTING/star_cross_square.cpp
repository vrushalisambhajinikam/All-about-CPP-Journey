#include<iostream>
using namespace std;
int main()
{
	
	int n,m;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star Hollow rectangle
	int temp=n;
	for(int i=1;i<=n;i++)	//rows
	{
		
		for(int j=1;j<=n;j++)	//cols
		{
			 if(i==j||i==temp||i==temp-j) 
			 {
			 	cout<<"*"<<" ";
			 }
			 else
			 {
			 	cout<<"#"<<" ";
			 }
			
		}
		cout<<endl;
	
	}
}
