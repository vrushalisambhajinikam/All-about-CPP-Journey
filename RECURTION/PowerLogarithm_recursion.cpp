#include<iostream>
using namespace std;

int powerLog(int a,int b)
{
	 if(b==0)return 1;
	 return (a*powerLog(a,b/2))*(a*powerLog(a,b/2));
}
int main()
{
	int a,b;
	cout<<"enter Base:";
	cin>>a;
	cout<<"enter power:";
	cin>>b;
	cout<<powerLog(a,b);
}
