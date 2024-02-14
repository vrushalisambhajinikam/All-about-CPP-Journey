#include<iostream>
using namespace std;
class City
{
	private:
		char city_name[20];
		char state_name[20];
	
	public:
		void get_city_info()
		{
			cout<<"Enter City Name:"<<endl;
			cin>>city_name;
			cout<<"Enter State Name:"<<endl;
			cin>>state_name;
		}
		void display_city_info()
		{
			cout<<endl;
			cout<<city_name<<"\t\t\t"<<state_name<<endl;
			
		}
};
int main()
{
	City c1,c2;
	c1.get_city_info();
	c2.get_city_info();
	
	cout<<"**********CITY INFO**********"<<endl;
	cout<<"\n"<<"City Name"<<"\t\t"<<"State Name";
	
	c1.display_city_info();
	c2.display_city_info();
	
	
}

