#include <iostream> 
using namespace std; 

class Human{
public:
	string name;

	void display(){
		cout<< "My name is: "<<name<<"\n";
	}
};

// Driver Code 
int main() 
{ 
	Human manan;
	manan.name="Manan";
	manan.display();
    
    Human *kirti=new Human();
    kirti->name="Kirti";
    kirti->display();
  
    return 0; 
} 