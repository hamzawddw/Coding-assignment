#include<iostream>
using namespace std;
class Vehicle{
public:
virtual void startEngine(){
	
	cout<<"Invoked from base class (Vehicle)"<<endl;
}
  
};
class Airplane:public Vehicle{
	
	
	public:
		void startEngine()override{
	cout<<"Invoked from Derived class (Airplane)"<<endl;
}
	//another method
		void hi(){
			Vehicle::startEngine();
		}
	
	

};
int main(){
	
	Vehicle v1;
	v1.startEngine();
	
	Airplane a1;
	a1.startEngine();
	//another method 
	a1.hi();
 
 
	
	
}