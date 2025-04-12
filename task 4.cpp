#include<iostream>
using namespace std;
class Book{


   public:
	string title;
	string name;
	
	Book(string t,string n):title(t),name(n){
		
		cout<<"Title of book:"<<title<<endl;
		cout<<"Author of book:"<<name<<endl;
	}
	 ~Book(){
        cout << "Memory Deallocated for Book: " << title << endl;
    }
};
int main(){

	Book* b1=new Book("Physics","Ahmed Ali");
	
	delete b1;
	b1=nullptr;
}