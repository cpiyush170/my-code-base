#include <iostream>
using namespace std;

class Instrument{

public:
// virutal function allows us to implement most derived
// version of  a function if it exists, otherwise it 
// will execute base class function for the same.
    virtual void MakeSound(){
        cout<<"Instrument playing...\n ";
    }
};

class Accordion : public Instrument{
public:
    void MakeSound(){
        cout<<"Accordion playing...\n ";
    }
};
int main() {
// creating pointer of Instrument class type and
// assigning object of derived class in it
    Instrument* i1 = new Accordion();
// without virtual function, it will point to base
// class implementation of makesound
    i1->MakeSound();
}
