#include<iostream>
using namespace std;
int main()
{
	int no1,no2;
	cout<<"Enter two Integer no:";
	cin>>no1>>no2;
	
	  
	 cout<<"Bitwise AND :"<<(no1&no2)<<endl;
	 cout<<"Bitwise OR :"<<(no1|no2)<<endl;;
	 cout<<"Bitwise XOR :"<<(no1^no2)<<endl;
	 
	 cout<<"Bitwise RIGHT SHIFT :"<<(no1>>no2)<<endl;;
	 cout<<"Bitwise LEFT SHIFT :"<<(no1<<no2)<<endl;;
	 
	return 0;
}
