#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter no of rows:";
	cin>>m;
	
	cout<<"Enter no of cols:";
	cin>>n;
	
	//make Rectangle where rows-m,col-5
	for(int i=1;i<=m;i++)	//rows
	{
		for(int i=1;i<=n;i++)	//cols
		{
			cout<<" * ";
		}
		cout<<endl;
	}
 
}
