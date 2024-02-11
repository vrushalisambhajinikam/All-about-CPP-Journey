 #include<iostream>
 using namespace std;
 
 int swap(int* p1,int* p2) //call by referance
 {
 	 int temp=*p1;
 	 *p1=*p2;
 	 *p2=temp;
	  
 }
int main()
{
	 int n1,n2;
	
	 cout<<"Enter first no:"<<endl;
	 cin>>n1;								
	 
	  cout<<"Enter second no:"<<endl;
	 cin>>n2;								
	 
	 swap(&n1,&n2);
	 
	 cout<<n1<<endl;
	 cout<<n2<<endl;
	 
}
