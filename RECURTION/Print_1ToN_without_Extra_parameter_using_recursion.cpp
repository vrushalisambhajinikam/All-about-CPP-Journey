#include<iostream>
using namespace std;
void Print(int n)
{
	if(n==0) return;	//base case
					//call
		Print(n-1);	
		cout<<n<<endl;		//work
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	Print(n);
}
