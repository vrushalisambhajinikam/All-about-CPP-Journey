 #include<iostream>
 using namespace std;
 
int main()
{
	 int n1,n2,temp;
	 cout<<"Enter first no:"<<endl;
	 cin>>n1;								//5
	 
	  cout<<"Enter second no:"<<endl;
	 cin>>n2;								//10
	 
	 n1=n1+n2;
	  n2=n1-n2;					//n2=5
	 n1=n1-n2;
	 
	 cout<<n1<<endl;
	 cout<<n2<<endl;
	 
}
