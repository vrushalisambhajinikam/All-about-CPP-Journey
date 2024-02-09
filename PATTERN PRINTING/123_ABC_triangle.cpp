#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no of rows:";						//1
	cin>>n;											//A B				
	//make star triangle							//1 2 3
	for(int i=1;i<=n;i++)	//rows					//A B C D
	{												//1 2 3 4 5
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)	//cols
			{
				cout<<char(j+64)<<" " ;
			}
		}
		else
		{
			for(int j=1;j<=i;j++)	//cols
			{
				cout<<j<<" " ;
			}
		}	
		cout<<endl;
	}
 
}
