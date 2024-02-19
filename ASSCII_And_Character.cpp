//print ASCII val and their character
#include<iostream>
using namespace std;
int main()
{
	int i,ch,j;
	char res;
	cout<<"1.Print Capital letter and thier ASCII"<<endl;
	cout<<"2.Print Small letter and thier ASCII"<<endl;
	cout<<"Enter your Choice:"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			for(i=65;i<=90;i++)
	   		 {
		    	res=char(i);
		    	cout<<i<<" "<<res<<endl;
			}
		break;
		
		case 2:
			for(i=97;i<=122;i++)
	   		 {
		    	res=char(i);
		    	cout<<i<<" "<<res<<endl;
			}
		break;
		
		default:
			cout<<"Invalid Choice";
		break;
	}
	    
}
