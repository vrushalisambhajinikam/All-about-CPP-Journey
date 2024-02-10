#include<iostream>
using namespace std;
int main()
{
	int arr[2][3];
	arr[0][0]=5;
	arr[0][1]=56;
	arr[0][2]=92;
	arr[0][3]=63;
	arr[1][0]=56;
	arr[1][1]=91;
	arr[1][2]=51;
	arr[1][3]=54;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}		
}
