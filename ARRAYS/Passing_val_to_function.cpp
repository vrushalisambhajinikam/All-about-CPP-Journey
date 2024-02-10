#include<iostream>
using namespace std;
void Change(int x)
{
	x=10;
}
int main()
{
  int x=3;
  cout<<x<<endl;
  Change(x);		//pass by value
  cout<<x<<endl;
}
