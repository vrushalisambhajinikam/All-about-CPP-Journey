#include<iostream>
using namespace std;
int main()
{
	int sum=0;
  int arr[5]={6,4,56,72,10};
  int n=sizeof(arr)/4;
  int minn=arr[0];
	 for(int i=1;i<=n;i++)
	 {
	 	if(arr[i]<minn)
	 	{
	 		minn=arr[i];
		}
	  		 
	 }
	 	cout<<minn<<endl;	
		
	 
}
