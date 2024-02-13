#include<iostream>
using namespace std;
void Greet()
{
	cout<<"Hey"<<endl;
	Greet();
	 
}
int main()
{
	Greet();
	
}
