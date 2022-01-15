#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    // creating a constructor
// constructor is a special member function with same
// name as of class, used to intialize the objects of its class
// It is automatically invoked whenever an object is created

    Complex(void); // constructor declaration

    void printNumber(){
        cout << "Complex number is "<< a<< " + "<<b<<"i"<<endl;
    }
};

Complex:: Complex(void){
    a = 10;
    b = 0;
}
int main() {
    Complex c;
    c.printNumber();
   
}
/* A constructor that don't take any parameter
is called default constructor 
 1. It should be declared in public section of class 
 2. They are automatically invoked whenever object is created 
 3. Don't have return types because they aren't functions
 4. It can have default arguments 
 5. We cannot refer to their address */ 
