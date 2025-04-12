#include<iostream>
using namespace std;
class Employees{
	private:
		static int num;
		
	public:
			
		Employees(){
				display();
			}
	static void display(){
		  	
		num++;
	
		}
		~Employees(){
				cout<<"Total num of employee are:"<<num<<endl;
			
		}
};
int Employees::num=0;
int main(){
	
	Employees e1,e3,e2,e4;
}