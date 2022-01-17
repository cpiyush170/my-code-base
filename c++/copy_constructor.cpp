#include <iostream>
using namespace std;

// copy constructor makes copy of other objects
class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // this a copy constructor that takes ref
    // of obj x and equal value == object of x a variable

    // when there is no copy constructor defined, complier
    // supplies its  own copy constructor -- default copy
    // constructor to every class
    // Number(Number &obj){
    //     a = obj.a;
    // }
    void display(){
        cout <<"The no. for object is "<<a<<endl;
    }
};
int main() {
    Number x,y,z(45), z2;
    z.display();
    x.display();
    y.display();
    // invoking copy constructor
    Number z1(z);
    z1.display();
    
    z2 = z; // copy constructor not called 
    Number z3 = z; // copy constructor invoked
    
}
