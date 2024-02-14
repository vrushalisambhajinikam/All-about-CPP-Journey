#include<iostream>
using namespace std;
class Addition
{
	 private:
	 	int a,b,c;
	 	
	public:
		void Getdata()
		{
			 a=10;
			 b=20;
		}
		
		void AdditionOp()
		{
			c=a+b;
			cout<<"\nAddition is:"<<c;
		}
};
int main()
{
	 Addition a1;
	 a1.Getdata();
	 a1.AdditionOp();
}

