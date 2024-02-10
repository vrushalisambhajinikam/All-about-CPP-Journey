#include<iostream>
using namespace std;
int main()
{
	int sum=0;
  int arr[5]={6,4,56,72,10};
  int n=sizeof(arr)/4;
  int mx=arr[0];
	 for(int i=1;i<=n;i++)
	 {
	 	if(arr[i]>mx)
	 	{
	 		mx=arr[i];
		}
	  		 
	 }
	 	
	 	cout<<mx<<endl;	
		
	 
}
