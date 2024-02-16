//no and reverse no sum from given number
#include<iostream>
using namespace std;
int main()
{
	int no,rev=0,sum,temp;
	cout<<"Enter no:";
	cin>>no;	
	temp=no;						//1234
	while(no!=0)						//4321
	{
		
		int ld=no%10;
		no=no/10;
		rev=rev*10;
		rev=rev+ld;
		
		
	}
	cout<<rev<<endl;
	cout<<"sum of no and rev no:"<<rev+temp;
}
