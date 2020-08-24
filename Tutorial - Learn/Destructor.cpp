#include <iostream> 
using namespace std; 

class Human{
public:
	Human(){
		cout<<"Constructor called\n";
	}

	~Human(){
		cout<<"Destructor called";
	}
	
};
// Driver Code 
int main() 
{ 
	// to destruct call the object as pointer.
	Human *manan;
	manan= new Human();
	delete manan;
    return 0; 
} 

/* Output:
Constructor called
Destructor called
*/