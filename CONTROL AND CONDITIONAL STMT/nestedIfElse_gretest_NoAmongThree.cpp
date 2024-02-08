#include<iostream>
using namespace std;

int main()
{
	int no1,no2,no3;
	 cout<<"Enter any three number..";
	 cin>>no1;
	 cin>>no2;
	 cin>>no3;
	 
	 if(no1>no2)
	 {
	 	if(no1>no3)
	 	{ 
		 	cout<<"first number is greter";
	 	}
	 	else
	 	{
	 		cout<<"Third number is greter..";
		}
	 }
	 else
	 {
	 	if(no2>no3)
	 	{
		 	cout<<"Secound number is greter..";
	 	}
	 	else
	 	{
	 		cout<<"Third number is greter";
		 }
	 }
	 
}
