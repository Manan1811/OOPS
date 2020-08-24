#include <iostream> 
using namespace std; 

class Human{
private:
	string name;
	int age;
	

public:
	Human(){
		name="no_name";
		age=20;
		cout<<"Constructor called\n";
	}
	void display(){
		cout<<name<<" "<<age<<"\n";
	}
};
// Driver Code 
int main() 
{ 
	Human manan;
	manan.display();  
    return 0; 
} 

/* Output:
Constructor called
no_name 20
*/