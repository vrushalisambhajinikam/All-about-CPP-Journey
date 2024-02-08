#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3,i;
	no1=0;
	no2=1;
	cout<<no1<<endl;
	//cout<<no2;
	for (i=1;i<10;i++)
	{
		no3=no1+no2;
		no1=no2;
		no2=no3;
		cout<<no3<<endl;

	}
}
