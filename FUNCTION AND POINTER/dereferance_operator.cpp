 #include<iostream>
 using namespace std;
int main()
{
	 int x=12;
	 int* p=&x;
	 cout<<x<<endl;
	 cout<<*p<<endl;
	 
	  *p=100;
	 cout<<x<<endl;
	
}
