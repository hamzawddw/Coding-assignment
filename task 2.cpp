#include<iostream>
using namespace std;
class Employees{
	
   public:
   int id;
   const int salary;
   	
   	Employees(int idd,int salar):salary(salar){
   		id=idd;
   		
   	 cout << "Employee Object Created at Address: "<<this<<endl;
	   }
	   
	   void print(){
	   	
	   	cout<<"The id of employee is:"<<id<<endl;
	   	cout<<"The salary of employee is:"<<salary<<endl;
	   	
	   	
	   }
};
int main(){
	
	Employees e1(3000,120000);
	e1.print();
	Employees e2(4378,230000);
	e2.print();
}