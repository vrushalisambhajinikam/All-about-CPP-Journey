#include<iostream>
using namespace std;
int main()
{
 
  int cp,sp;
  cout<<"Enter cost price:"<<endl;
  cin>>cp;
  
  cout<<"Enter selling price:"<<endl;
  cin>>sp;
  
  if(sp>cp)
  {
  	cout<<"Made profit"<<endl;
  	cout<<"Total profit is:"<<sp-cp<<endl;
  }
  else if(sp==cp)
  {
  	cout<<"win win conditon"<<endl;
  
  }
  else
  {
  	cout<<"Made loss"<<endl;
  	cout<<"Total loss is:"<<cp-sp<<endl;
  }
  
}
