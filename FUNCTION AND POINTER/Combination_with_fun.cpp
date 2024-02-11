//factorial of given no
#include<iostream>
using namespace std;
int factorial(int x)
{
	int f=1,i=1;
	while(i<=x)
	{
		f *=i;
	}
	return f;
}
int main()
{
	//Formula
//	a=n!;
//	b=r!;
//	c=(n-r)!
//	comb=a/(b-c)

	 
	int a,b,c,r,n;
	cout<<"Enter n:";
	cin>>n;	
	
	cout<<"Enter r:";
	cin>>r;	
		
	a=factorial(n);
	cout<<"Factorial of n:"<<a<<endl;
	
	b=factorial(r);
	cout<<"Factorial of n:"<<b<<endl;		
	
	int z=n-r;
	c=factorial(z);	
	cout<<"Combination :"<<a/(b*c);
}
