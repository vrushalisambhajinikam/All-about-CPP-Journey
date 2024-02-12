#include<iostream>
using namespace std;
int main()
{
	//count vowel
 	string s="Vrushali is here..";
	 
	 int count=0;
	 
	 for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
		{
			count++;
		}
	}
	cout<<count;
}
