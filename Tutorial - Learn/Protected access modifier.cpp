#include <iostream> 
using namespace std; 

class Person{
protected:
	string name;
public:
	void setName(string iname){
		name=iname;
	}
};
class Student: public Person{
public:
	void display(){
		cout<<name<<"\n";
	}
};

// Driver Code 
int main()
{ 
	Student Manan;
	Manan.setName("Manan");
	Manan.display();
	return 0;
} 

/* Output:
Manan
*/