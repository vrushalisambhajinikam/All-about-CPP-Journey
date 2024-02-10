#include<iostream>
using namespace std;
int main()
{
	int n; 
	cout<<"Enter array size:"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter array elements:";
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"Final array elements:"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		if(i%2!=0)
		{
			arr[i]=arr[i]*2;
		}
		else
		{
			arr[i]=arr[i]+10;
		}
		
		cout<<arr[i]<<endl;
	}
 
}
