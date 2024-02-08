#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3,i,fibseries;
	no1=0;
	no2=1;
	cout<<no1<<endl;
	cout<<"Enter number where you want to genetare fibonancci sires..";
	cin>>fibseries;
 	while(i<=fibseries)
 	{
		no3=no1+no2;
		no1=no2;
		no2=no3;
		cout<<no3<<endl;
		i++;
	}
}
