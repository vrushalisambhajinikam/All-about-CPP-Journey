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
		for(int j=1;j<=n;j++)	//cols
		{
			cout<<i<<" " ;
		}
		cout<<endl;
	}
 
}
