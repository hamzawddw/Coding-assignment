#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
		
public:
	
 void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    
    void display() {
        cout << "Name:"<<name<<",Age: "<<age<<endl;
    }
   
};

class Student:public Person{
	
	private:
	char grade;
	
	public:
		void setter(char g){
			grade=g;
		}
		
	void display(){
		Person::display();
		cout<<"Grade is "<<grade;
	}
	

};
int main(){
	
	Student s1;
	
	s1.setDetails("ali",20);
	s1.setter('A');
	cout << "Student Details:\n";
	s1.display();
	

  Student s2;
  s2.	setDetails("hamza",30);
  s2.	setter('A');
  s2.	display();
 
	
	
}