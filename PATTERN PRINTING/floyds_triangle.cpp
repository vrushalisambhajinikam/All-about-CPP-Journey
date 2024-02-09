#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter no of rows:";
	cin>>n;
	
	//make star triangle
	int a=1;
	for(int i=1;i<=n;i++)	//rows
	{
		
		for(int j=1;j<=i;j++)	//cols
		{
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	
	}
}
