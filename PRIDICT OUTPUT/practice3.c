#include<stdio.h> 
  int fun(const union employee *e); 
    union employee
	 {     
		 char name[15];   
		   int age;    
		    float salary;
	 }; 
	 const union employee e1;   
	 int main()
	  {     
	  	strcpy(e1.name, "A");  
		     fun(&e1);     
			 printf("%s %d %f", e1.name, e1.age, e1.salary);   
			   return 0;
	 }
	  int fun(const union employee *e) 
	  {  
	     strcpy((*e).name, "B");    
		  return 0;
	 }  

