#include<iostream>
using namespace std;
int main()
{
	int n,sumeven=0,sumodd=0,diff; 
	cout<<"Enter array size:"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter array elements:";
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<=n;i++)
	{
		  if(i%2==0)
		  {
		  	sumeven=sumeven+arr[i];
		  }
		  else
		  {
		  	sumodd=sumodd+arr[i];
		  }	  
	
		  diff=sumeven-sumodd;
	
	cout<<"Diff between sum of even index and odd index:"<<diff<<endl;
	
	
}
