#include <iostream>
using namespace std;

class Base1{

    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout << "Base1 class constructor called "<<endl;
    }
    void printData1(){
        cout <<"Value of data 1 is "<<data1<<endl;
    }
};

class Base2{

    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout << "Base2 class constructor called "<<endl;
    }
    void printData2(){
        cout <<"Value of data 2 is "<<data2<<endl;
    }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
    // give value of a of object of derived class
    // to base1 and value of b to base2
Derived(int a, int b, int c, int d):Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called "<<endl;
    }
    void printData(){
        cout <<"Value of derived 1 is "<<derived1<<endl;
        cout <<"Value of derived 2 is "<<derived2<<endl;
    }
};
int main() {
    Derived piyush(1,4,9,0);
    piyush.printData();
    
}
