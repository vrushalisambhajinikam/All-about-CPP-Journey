#include<iostream>
using namespace std;
class Addition
{
	 private:
	 	int n1,n2;
	 	
	public:
		void Getdata()
		{
			cout<<"\nEnter first number:";
			cin>>n1;
			cout<<"\nEnter second number:";
			cin>>n2;
		}
		
		void AdditionOp()
		{
			int add=n1+n2;
			cout<<"\nAddition is:"<<add;
		}
};
int main()
{
	 Addition a1;
	 a1.Getdata();
	 a1.AdditionOp();
}

