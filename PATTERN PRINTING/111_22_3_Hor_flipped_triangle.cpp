#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star triangle
	
	for(int i=1;i<=n;i++)	//rows
	{
		for(int j=1;j<=n-i;j++)	//cols
		{
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<"Vrushali pattern printing...."<<endl;
	
	}
}
