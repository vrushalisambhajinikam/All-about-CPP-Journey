//Create a class student having data members roll no, name and marks
//Accept and display data for one object
#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		float marks;
		char name[10];
		
	public:
		void get_stud_info()
		{
			cout<<"\n Enter student Name:";
			cin>>name;
			cout<<"Enter student Rollno:";
			cin>>rollno;
			cout<<"\n Enter student Marks:";
			cin>>marks;
		}
		
		void disp_stud_info()
		{
			cout<<"\n******STUDENT INFORMATION *******:";
			cout<<"\nStudent Name:"<<name;
			cout<<"\nStudent Rollno:"<<rllno;
			cout<<"\nStudent Marks:"<<marks;
		}
}
int main()
{
	
}
