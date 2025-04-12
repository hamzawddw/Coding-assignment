
#include<iostream>
using namespace std;
class Person{
	
    	public:
	string* name;

		
	Person(string n){
		
		name=new string(n);
		
	}
	
	
	Person(const Person& p){
		name=p.name;
	}
	
  
  /* Person& operator=(const Person& p) {
        if (this != &p) { // Prevent self-assignment
            delete name; // Free old memory
            name = new string(*p.name); // Allocate new memory and copy value
        }
        return *this;
    }
    */
   Person(const Person& p,int n) {
        if(n){
            name = new string(*p.name);
         
        }else {
            name = p.name; 
        }
    }
 void display(){
  	cout<<"Name of person is:"<<*name<<" with address "<<name<<endl;
  }
  
  ~Person(){
  	delete name;

  }
};
int main(){
 
 cout<<"Example of shallow copy: "<<endl;
 Person p1("Hamza");
 Person p2(p1,0);
 cout<<"Result before changing second value:"<<endl;
 p1.display();
 p2.display();
 *p2.name="ali";
 
 cout<<"Result after changing second value:"<<endl;
  p1.display();
 p2.display();
 cout<<"\n\tSO both value chanes byy changing one value"<<endl;
  
  cout<<"Example of deep constructor"<<endl;
  Person p3("ahmed");
  Person p4(p3,1);
  cout<<"Result before changing second value:"<<endl;
  p3.display();
  p4.display();
   cout<<"Result after changing second value:"<<endl;
  *p4.name="hamza";
  p3.display();
  p4.display(); 
  

}