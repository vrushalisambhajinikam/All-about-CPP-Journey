#include<iostream>
using namespace std;
int main()
{
	//find gretest no
 
  int a,b,c;
  cout<<"Enter any three no:";
  cin>>a>>b>>c;
   
   if(a>b)
   {
   	if(a>c)
   	{
		cout<<"a is greter";   		
    }
    else
    {
    	cout<<"C is greter";
	}
   }
   else
   {
   	if(b>c)
   {
   	cout<<"b is greter";
   }
   else
   {
   	cout<<"C is greter";
   }
   }
   
}
