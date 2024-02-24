/*

Operator Overloading: unary minus(--) Operator

syntax for calling unary operator function =>op objectName;
*/
#include<iostream>
using namespace std;
class Space
{
    private:
    	int x,y,z;
    public:
    	void getdata(int m,int n,int p)
    	{
    		x=m;
    		y=n;
    		z=p;
		}
		void display()
		{
			cout<<"\nvalue of x="<<x;
			cout<<"\nvalue of y="<<y;
		    cout<<"\nvalue of z="<<z;
		}
		void operator --();
};
void Space::operator --()
{
	x--;
	y--;
	z--;
}
int main()
{
	
	 Space s1;
	 s1.getdata(10,20,30);
	 cout<<"\nBefore calling operator overloading function";
	 s1.display();
	 --s1;
	 cout<<"\nAfter calling operator overloading function";
	 s1.display();
}


