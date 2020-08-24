#include <iostream> 
using namespace std; 

class Human{
public:
	string name;
	void display();
};
//string Human :: name="noname";
void Human :: display(){
	cout<<Human :: name<<"\n";
}

// Driver Code 
int main() 
{ 
	Human manan;
	manan.name="Manan";
	manan.display();
    

  
    return 0; 
} 