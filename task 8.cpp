#include<iostream>
using namespace std;
class Shape{
	private:
		float area;
		
	protected:
	 void calculatearea(float r){
			area=r*r*3.14;
		}
		

		
  public:
  void displayarea(){
  		cout<<"Area of circle is:"<<area;
	  }
  
};
class Circle:public Shape{
	
	public:
		
	int radius;
	
	 Circle(double r) {
        radius = r;
        calculatearea(r);
    }
	
	
	
	

};
int main(){
	
 Circle c1(5);
 c1.displayarea();
 
	
	
}