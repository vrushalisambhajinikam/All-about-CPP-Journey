#include<iostream>
using namespace std;
int main()
{
 //5 integers -> 6,4,56,72,10
 
 int X[5]={6,4,56,72,10};	//Declaration + Initilization
  // int X[]={6,4,56,72,10};	//If we both write in same line then we also write array without size
  
  cout<<"Your Ele are:"<<endl;
 
 for(int i=4;i>=0;i--)
 {
 	cout<<X[i]<<endl;			//Yala Mhantat mast wali printing..
 }
 
}
