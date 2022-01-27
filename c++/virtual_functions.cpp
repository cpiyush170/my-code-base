#include <iostream>
using namespace std;

class Base{

    public:
// here print is made virtual in base class to override
// it by derived class function, otherwise the base class
// function was to run if it was not virtual
     virtual void print(){ cout << "Print base class "<< endl;}
     void show(){ cout << "Show base class"<<endl;}
};

class derived:public Base{
    public:
     void print(){ cout << "Print derived class "<< endl;}
     void show(){ cout << "Show derived class"<<endl;}
};
int main() {
    Base *bptr;
    derived d; // creating derived class obj
    // base class pointer pointing to derived 
    // class object
    bptr = &d; 
    
    bptr->print();
    bptr->show();
}
