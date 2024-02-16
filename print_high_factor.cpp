#include<iostream>
using namespace std;
int main()
{
 int no;
 cout<<"Enter n val";
 cin>>no;
 int i,high_fact;
 
 for(i=1;i<=no;i++)
 {
 	if(no%i==0)
 	{
 		cout<<i<<endl;
 		high_fact=i;
	 }
 }
 cout<<"Highest factor is :"<<high_fact;
 	
}
