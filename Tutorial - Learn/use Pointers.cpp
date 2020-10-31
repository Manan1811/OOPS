#include <iostream> 
using namespace std; 

class Human{
private:
	string *name;
	int *age;
public:
	Human(string iname, int iage){
		name=new string(iname);
		age=new int(iage);
	}
	void display(){
		cout<<" I am "<< *name<<" . I am "<< *age<<"\n";
	}
	~Human(){
		cout<<"Destructor called\n";
		delete name;
		delete age;
	}
};


// Driver Code 
int main() 
{ 
	Human *manan= new Human("Manan", 19);
	manan->display();
	delete manan;
    return 0; 
} 

/*
Output:
I am Manan . I am 19
Destructor called
*/