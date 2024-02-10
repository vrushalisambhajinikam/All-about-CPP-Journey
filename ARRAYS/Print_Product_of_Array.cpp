#include<iostream>
using namespace std;
int main()
{
	int prod=1;
  int arr[5]={6,4,56,72,10};
  cout<<"Your Ele are:"<<endl;

	 for(int i=1;i<=4;i++)
	 {
	 	cout<<arr[i]<<endl;	
		 prod=prod*arr[i];		 
	 }
	 
	 cout<<"Your Arrya product is:"<<prod<<endl;
}
