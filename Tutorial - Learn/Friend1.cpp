#include <iostream> 
using namespace std; 

class Human{
private:
	string name;
	int age;
public:
	Human(string iname, int iage){
		name=iname;
		age=iage;
	}
	void tell(){
		cout<<" I am "<< name<<" . I am "<< age<<"\n";
	}
	friend void display(Human man);
};

void display(Human man){
	cout<<man.name<<"\n"<<man.age<<"\n";
}

// Driver Code 
int main() 
{ 
	Human Manan("Manan", 19);
	display(Manan);	
    return 0; 
} 

/*
Output:
Manan
19
*/