#include<iostream>
using namespace std;
class Addition
{
	 private:
	 	int a,b,c;
	 	
	public:
		void Getdata();			//fun declaration
		void AdditionOp();		//fun declaration
		 
};

void Addition :: Getdata()			//fun Defination outside the class
{
	 a=10;
	 b=20;
}
void Addition :: AdditionOp()			//fun Defination outside the class
{
	c=a+b;
	cout<<"\nAddition is:"<<c;
}
int main()
{
	 Addition a1;
	 a1.Getdata();
	 a1.AdditionOp();
}

