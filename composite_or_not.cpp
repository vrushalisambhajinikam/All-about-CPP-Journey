#include<iostream>
using namespace std;
int main()
{
 int no;
 cout<<"Enter n val";
 cin>>no;
 int i;
 bool flag=true;
 
 for(i=2;i<=no/2;i++)
 {
 	if(no%i==0)
 	{
 		flag=false;            //false means composite
 		 break;
	 }
 }
 if(flag==true)
 cout<<"prime"<<endl;
  else
   cout<<"composite"<<endl;
}
