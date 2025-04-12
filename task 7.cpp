#include<iostream>
using namespace std;
class Employee{
	
  public:
  
  	int id;
  	int salary;
  	
  	Employee(int ids,int s){
  		
  		id=ids;
  		salary=s;
	  }
	  
  	 void showemployee() {
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};
class Person{
	public :
		string name;
		int age;
		
		Person(string n,int a){
			name=n;
			age=a;
		}
		void showperson(){
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
class Student{
	public:
	int studentid;
	float gpa;
	
	Student(int sid,float gp){
		studentid=sid;
		gpa=gp;
	}
	
	void showstudent(){
	cout<<"Student ID:"<<studentid<<endl;
	cout<<"Student GPA:"<<gpa<<endl;
	}
};
class Ta:public Employee,public Person,public Student{
	
	public:
	string* subject;
	int count;
	
	Ta(int ids,int s,string nam,int age,int sid,float gp,string* sub,int count):Employee(ids, s),Person(nam,age),Student(sid,gp){
		subject=new string[count];
  	 for(int i=0;i<count;i++){
  	 	subject[i]=sub[i];
	   }
	}
	
	void showta(){
		cout << "\nTA Details:" << endl;
        Person::showperson();
        Employee::showemployee();
        Student::showstudent();
        for(int i=0;i,count;i++){
        cout << "\tSubject: " <<subject[i];
    }
    

	}
	~Ta(){
		delete[] subject;
		subject=nullptr;
	}
	
};
int main(){
		
		string a[]={"Mvc","Opps","Physcis"};
		
		string b[]={"Math","Programming","Physcis","Islaymiat"};
		Ta t1(1122,10000,"Ali",20,3039,3.5,a,3);
			t1.	showta();
		Ta t2(2322,1220000,"Hamza",18,3039,3.6,b,4);
		
	
		t2.showta();
		
}