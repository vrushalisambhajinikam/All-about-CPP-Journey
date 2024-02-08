#include<iostream>
using namespace std;
int main()
{
 
  int a,b,c;
  cout<<"Enter any three no:";
  cin>>a>>b>>c;
   if((a+b)>c and (b+c)>a and (a+c)>b)
   {
   	cout<<"valid tringle";
   }
   else
   {
   	cout<<"Not valid tringle";
   }
}
