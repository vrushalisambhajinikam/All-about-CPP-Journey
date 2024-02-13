#include<iostream>
using namespace std;
void Print(int n)
{
	if(n==0)
	return;
	cout<<n<<endl;
	Print(n-1);
}
int main()
{
	Print(5);
}
