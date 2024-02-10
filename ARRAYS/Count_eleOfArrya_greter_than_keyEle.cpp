#include<iostream>
using namespace std;
int main()
{
	int n,x,acount=0; 
	cout<<"Enter array size:"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter array elements:";
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter key elements:";
	cin>>x;
 
	for(int i=0;i<=n-1;i++)
	{
		 if(arr[i]>x)
		 {
		 	count++;
		 }
	}
	cout<<"Count of number greter than key:"<<count<<endl;
}
