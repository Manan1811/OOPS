#include <iostream> 
using namespace std; 

class Human{
protected:
	string name;
public:
	void setName(string iname){
		name=iname;
	}
};

// Private inheritance , Human becomes private members
class Student:private Human{
public:
	void display(){
		cout<<name<<"\n";
	}
	void setStudentName(string iname){
	 	//setName(iname);
	 	name=iname;
	}
};

class Gstudent: public Student{
public:
	void setGstudentName(string iname){
		setStudentName(iname);
	}
};

// Driver Code 
int main() 
{ 
	Gstudent manan;
	manan.setGstudentName("Manan");
	manan.display();	
    return 0; 
} 

/*
Output:
Manan
*/