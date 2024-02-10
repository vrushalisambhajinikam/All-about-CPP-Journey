#include<iostream>
using namespace std;
int main()
{
	int studarr[4][2]={{95,30},{96,56},{88,23},{83,40}};
	 
	 cout<<"Student Roll no and Marks:"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<studarr[i][j]<<" ";
		}
		cout<<endl;
	}		
}
