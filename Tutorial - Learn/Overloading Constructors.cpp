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
		cout<<"Default Constructor called\n";
	}
	Human(int age2){
		cout<<"Constructor with age called\n";
		name="hello";
		age=age2;
	}
	Human(string name2){
		cout<<"Constructor with name called\n";
		age=14;
		name=name2;
	}
	Human(string name2, int age2){
		cout<<"Constructor with both called\n";
		name=name2;
		age=age2;
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

	Human manan2("Manan");
	manan2.display();

	Human manan3(19);
	manan3.display();

	Human manan4("Manan Agrawal", 21);
	manan4.display();

    return 0; 
} 

/*Output:
Default Constructor called
no_name 20
Constructor with name called
Manan 14
Constructor with age called
hello 19
Constructor with both called
Manan Agrawal 21
*/