#include<iostream>
using namespace std;
int main()
{
	int no1,no2;
	cout<<"Enter two Integer no:";
	cin>>no1>>no2;
	
	cout<<"no1 && no2 : "<<(no1&&no2)<<endl;
	cout<<"no1 || no2 : "<<(no1||no2)<<endl;
	cout<<"no1 !  no2 : "<<(!(no1 && no2))<<endl;
	
	int res=(no1<no2)&&(!(no1 && no2))||(no1>=no2);
	cout<<res;
	 
	return 0;
}
