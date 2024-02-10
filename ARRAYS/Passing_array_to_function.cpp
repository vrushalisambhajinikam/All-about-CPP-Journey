#include<iostream>
using namespace std;
void Change(int arr[])
{
	arr[0]=530;
}
int main()
{
  int arr[5]={6,4,56,72,10};
  cout<<"Your Ele are:"<<endl;
 
	 for(int i=1;i<=4;i++)
	 {
	 	cout<<arr[i]<<endl;			 
	 }
	 
	 cout<<endl;
	 
	 Change(arr);
	  for(int i=1;i<=4;i++)
	 {
	 	cout<<arr[i]<<endl;			 
	 }
}
