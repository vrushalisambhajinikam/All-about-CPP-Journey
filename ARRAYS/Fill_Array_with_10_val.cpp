#include<iostream>
using namespace std;
int main()
{
	int fillarr[5][5];
	 
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			fillarr[i][j]=10;
		}
	}		
	
	cout<<"Your 10 Filled array is :"<<endl;
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			cout<<fillarr[i][j]<<" ";
		}
		cout<<endl;
	}		
}
