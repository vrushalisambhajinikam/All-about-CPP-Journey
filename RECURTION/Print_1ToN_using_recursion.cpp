#include<iostream>
using namespace std;

void Print(int n1,int f1)
{
	int flag=f1;
	int n=n1;
	if(n>=flag)
	return;
	cout<<n<<endl;
	Print(n+1,f1);
}
int main()
{
	int flag;
	cout<<"enter flag:";
	cin>>flag;
	Print(1,flag);
}
