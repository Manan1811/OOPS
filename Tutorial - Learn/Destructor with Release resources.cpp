#include <iostream> 
using namespace std; 

class Human{
private:
	string *name;
	int *age;
public:
	Human(string iname, int iage){
		name=new string;
		age=new int;

		*name= iname;
		*age=iage;
		cout<<"Constructor called\n";
	}
	void display(){
		cout<<"My name is "<<*name<<". I am "<<*age<<"\n";
	}

	~Human(){
		delete name;
		delete age;

		cout<<"Destructor called";
	}
	
};
// Driver Code 
int main() 
{ 
	// to destruct call the object as pointer.
	Human *manan=new Human("MANAN", 19);
	manan->display();
	delete manan;
    return 0; 
} 

/* Output:
Constructor called
My name is MANAN. I am 19
Destructor called
*/