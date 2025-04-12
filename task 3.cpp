#include<iostream>
using namespace std;
class Car{

   public:
   	int year;
	string model;
	
	Car(string mod,int y){
	year=y;
	model=mod;
	 cout << "Car Created: " << model << " (" << year << ")" << endl;
	}
	
	~Car(){
	cout<<"An object of car is destroyed."<<endl;
	}
	
	void display(){
	cout<<"Car model:"<<model<<endl;
	cout<<"Car manufacture year:"<<year<<endl;
	}
};
int main(){
	
	Car c1("toyota",2000);
	c1.display();
	Car c2("Suzuki",1960);
	c2.display();
	
}