#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    public:
        int age,std;
        string fname;
        string lname;
        
    public:
        void get_age()
        {
            cin>>age;
        }
        int set_age()
        {
            cout<<age<<endl;
            return age;
        }
        
        void get_first_name()
        {
            cin>>fname;
        }
        string set_first_name()
        {
            cout<<fname<<endl;
            return fname;
        } 
        
        void get_last_name()
        {
            cin>>lname;
        }
        string set_last_name()
        {
            cout<<lname<<", ";
            return lname;
        } 
        
        void get_standard()
        {
            cin>>std;
        }
        int set_standard()
        {
            cout<<std;
            return std;
        } 
        
};

int main() 
{   
    stringstream  combo;
     Student s1;
    s1.get_age();
    s1.get_first_name();
    s1.get_last_name();
    s1.get_standard();
    
   int age= s1.set_age();
    string fn=s1.set_last_name();
   string ln= s1.set_first_name();
   int std= s1.set_standard();
   
   cout<<endl;
     cout<<endl<<age<<","<<ln<<","<<fn<<","<<std;
    
    return 0;
}

