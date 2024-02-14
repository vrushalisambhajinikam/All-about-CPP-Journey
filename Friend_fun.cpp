#include<iostream>
using namespace std;
class AIML
{
	private:
		int a,b;
	public:
		void accept()
		{
			a=10;
			b=20;
		}	
		friend void show(AIML,m);
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
void show(AIML,m)
	{
  cout<<m.a+m.b;
	}
 
int main()
{
	  AIML ai;
	  ai.accept();
	  show(ai);
}

