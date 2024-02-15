//count sum of digits from given number
#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"Enter no:";
	cin>>no;							//12345
	while(no!=0)
	{
	
		int ld=no%10;
		sum=sum+ld;
		no=no/10;
		
	}
	cout<<sum;
}
