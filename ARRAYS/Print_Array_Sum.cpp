#include<iostream>
using namespace std;
int main()
{
	int sum=0;
  int arr[5]={6,4,56,72,10};
  cout<<"Your Ele are:"<<endl;
 
	 for(int i=1;i<=4;i++)
	 {
	 	cout<<arr[i]<<endl;	
		 sum=sum+arr[i];		 
	 }
	 
	 cout<<"Your Arrya sum is:"<<sum<<endl;
	 cout<<"Array size is:"<<sizeof(arr)<<endl;
	 cout<<"Total Ele present in array :"<<sizeof(arr)/4<<endl;
	  
}
