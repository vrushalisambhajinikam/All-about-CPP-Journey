#include<iostream>
using namespace std;
int main()
{
	
 	string s="Vrushali";
  
  	 
 	 int n=s.length();
 	 int i=0;
 	 int j=n/2-1;
 	 
 	 while(i<j)
 	 {
 	 	char temp=s[i];
 	 	s[i]=s[j];
 	 	s[j]=temp;
 	 	
 	 	i++;
 	 	j--;
	  }
 	 cout<<s<<endl;
 	
 	 
}
