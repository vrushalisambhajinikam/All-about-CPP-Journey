#include<iostream>
using namespace std;
int main()
{
	int n; 
	cout<<"Enter array size:"<<endl;
	cin>>n;
	
	int arr[n];
	
	int sq;
	for(int i=1;i<=n;i++)
	{
		sq=i*i;
		arr[i]=sq;
	}
	cout<<"Your Square array is:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
}
