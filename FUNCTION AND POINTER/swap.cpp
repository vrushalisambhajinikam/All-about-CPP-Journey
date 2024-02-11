 #include<iostream>
 using namespace std;
 
int main()
{
	 int n1,n2,temp;
	 cout<<"Enter first no:"<<endl;
	 cin>>n1;								//5
	 
	  cout<<"Enter second no:"<<endl;
	 cin>>n2;								//10
	 
	 temp=n1;
	 n1=n2;							//n1=10
	 n2=temp;						//n2=5
	 
	 cout<<n1<<endl;
	 cout<<n2<<endl;
	 
}
