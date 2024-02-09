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
		for(int j=n;j<=i;j++)	//cols
		{
			cout<<j<<" " ;
		}
		cout<<endl;
	}
 
}
