#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make square  
	for(int i=1;i<=n;i++)	//rows
	{
		for(int i=1;i<=n;i++)	//cols
		{
			cout<<" * ";
		}
		cout<<endl;
	}
 
}
