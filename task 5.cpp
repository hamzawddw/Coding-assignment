#include<iostream>
using namespace std;
class Rectangle{

   public:
   	int lenght;
   	int breadth;
   	
   	Rectangle(int l,int b){
   	 
		lenght=l;
		breadth=b;
			
	}
   	
   	Rectangle(const Rectangle& r1){
   		
   		lenght=r1.lenght;
   		breadth=r1.breadth;
	   }
   
   void display(){
   	cout << "Rectangle Dimensions: " <<lenght << " x " << breadth << endl;
   }
};
int main(){

  Rectangle r1(10,20);
  Rectangle r2(r1);
  cout<<"Original Rectangle:"<<endl;
  r1.display();
  cout<<"Copied Rectangle:"<<endl;
  r2.display();
  

}