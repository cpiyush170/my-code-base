#include <iostream>
using namespace std;

class Instrument{

public:
// pure virtual function: they allow to implement
// specific implementation for a certain function
// in every class
// It forces every derived class to make their own 
// implementation of makesound() function
// this whole class is called abstract class: because
// it has at least 1 pure virtual function
    virtual void MakeSound() = 0;
};

class Accordion : public Instrument{
public:
    void MakeSound(){
        cout<<"Accordion playing...\n ";
    }
};
class Piano : public Instrument{
public:
    void MakeSound(){
        cout<<"Piano playing...\n ";
    }
};
int main() {
// creating pointer of Instrument class type and
// assigning object of derived class in it
    Instrument* i1 = new Accordion();
// without virtual function, it will point to base
// class implementation of makesound
    i1->MakeSound();

    Instrument* i2 = new Piano();
    i2->MakeSound();
}
