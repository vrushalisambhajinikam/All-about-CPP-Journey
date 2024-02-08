#include<iostream>
using namespace std;
int main()
{
	//find gretest no
 
  int x,y;
  cout<<"Enter any x and y codinate:";
  cin>>x>>y;
   
 if(x>0 && y>0)
 {
 	cout<<"It is form first coorinate";
 }
 else if(x<0 && y>0)
 {
 	cout<<"It is form second coorinate";
 }
   
 else if(x<0 && y<0)
 {
 	cout<<"It is form third coorinate";
 }
 else
 {
 	cout<<"It is form fourth coorinate";
 }
   
}
