#include<iostream>
using namespace std;
void Usa()
{
	cout<<"You are from Usa"<<endl;
	return;
}
 void India()
{
	cout<<"You are from India"<<endl;
	 Usa();
}

int main()
{
	 cout<<"You are in Main"<<endl;
	 India();
	
	return 0;
}


