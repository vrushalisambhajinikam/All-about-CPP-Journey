//reverse of digits from given number
#include<iostream>
using namespace std;
int main()
{
	int no,rev=0;
	cout<<"Enter no:";
	cin>>no;							//12345
	while(no!=0)
	{
	
		int ld=no%10;
		rev=rev*10;
		rev=rev+ld;
		no=no/10;
		
	}
	cout<<rev;
}
