#include<iostream>
using namespace std;
int main()
{
 //5 integers -> 6,4,56,72,10
 
 int X[5];	//Declaration
  
  cout<<"Enter 5 Arrya elments:"<<endl;
  int i=0;
  while(i<=4)
  {
  	cin>>X[i];					//Yala Mhantat mast wali input scanning..
  	i++;
  }
  
  cout<<"Your Ele are:"<<endl;
 
 for(int i=0;i<=4;i++)
 {
 	cout<<X[i]<<endl;			//Yala Mhantat mast wali printing..
 }
 
 X[1]=500;
 X[3]=1000;
 
 cout<<"Your Ele After updation are:"<<endl;
 
 for(int i=0;i<=4;i++)
 {
 	cout<<X[i]<<endl;			//Yala Mhantat mast wali printing..
 }
  
}
