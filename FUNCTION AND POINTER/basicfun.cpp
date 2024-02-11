#include<iostream>
using namespace std;
void Greet()
{
	cout<<"Good morning baby..."<<endl;
	cout<<"Love u.."<<endl;
}
void India()
{
	cout<<"You are from India"<<endl;
	return;	//function khatam baki ki koii value nhi usko..
	cout<<"You are from India"<<endl;	//it will waste of line not exicuted
}
void Usa()
{
	cout<<"You are from Usa"<<endl;
	return;
}
int main()
{
	
	cout<<"I'm lerning Functions"<<endl;
	cout<<"WOW It's Amazing "<<endl;
	Greet();
	cout<<"Thankuuu"<<endl;
	India();
	Usa();
	
}
