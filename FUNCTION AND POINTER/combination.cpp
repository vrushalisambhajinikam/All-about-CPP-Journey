//factorial of given no
#include<iostream>
using namespace std;
int main()
{
	//Formula
//	a=n!;
//	b=r!;
//	c=(n-r)!
//	comb=a/(b-c)

	int n,fact=1,fact1=1,fact2=1,i=1;
	int a,b,c,r;
	cout<<"Enter n:";
	cin>>n;	
	
	cout<<"Enter r:";
	cin>>r;	
		
		a=1;					
	while(i<=n)						
	{
		a=a*i;
	 	i++;
	}
	
	cout<<"Factorial of n:"<<a<<endl;
	
	b=1;	
	i=1;				
	while(i<=r)						
	{
		b=b*i;
	 	i++;
	}
	cout<<"Factorial of r:"<<b<<endl;
	
	c=1;		
	i=1;			
	while(i<=n-r)						
	{
		c=c*i;
	 	i++;
	}
 
	cout<<"Combination :"<<a/(b*c);
}
