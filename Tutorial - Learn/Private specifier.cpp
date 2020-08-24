#include <iostream> 
using namespace std; 

class Human{
private:
	int age;
	int getAge(){
		return age-5;
	}

public:
	void displayage(){
		cout<<getAge()<<"\n";
	}
	void setAge(int value){
		age=value;
	}
};
// Driver Code 
int main() 
{ 
	Human manan;
	manan.setAge(19);
	manan.displayage();  
    return 0; 
} 