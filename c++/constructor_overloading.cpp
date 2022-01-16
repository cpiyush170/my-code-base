#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    // constructor overloading
    // when multiple constructors are inside class and each constructor get executed based on what you pass
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    Complex(){
        a =0;
        b =0;
    }
    void printC(){
        cout << a <<"+"<< b <<"i"<<endl;
    }
};
int main() {
    Complex c(2,4);
    c.printC();
    Complex d(4);
    d.printC();
    Complex ed;
    ed.printC();
}
