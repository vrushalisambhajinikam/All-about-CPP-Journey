//count sum of even digits from given number
#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"Enter no:";
	cin>>no;							//1234
	while(no!=0)
	{
		int ld=no%10;
		no=no/10;
		if(ld%2==0)
		{
			sum=sum+ld;	
		}
	}
		cout<<sum;
	
}
