#include<iostream>
using namespace std;

void Sum(int start,int last)
{
	int sum=0;
	for(int i=1;i<=last;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of 1 to "<<last<<" is :"<<sum;
}
int main()
{
	int n;
	cout<<"enter N:";
	cin>>n;
	Sum(1,n);
}
