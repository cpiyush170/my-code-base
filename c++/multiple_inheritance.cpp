// Multiple inheritance - A derived class (sub or child class) with two or more base class
#include <iostream>
using namespace std;

//syntax for inheriting multiple inheritance
/* class derived-class-name : visibility-mode base-class-name1,
 visibility-mode base-class-name2 
 {
   // body of derived class  
     }*/
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
// creating a class derived which is inheriting
// from base1 and base2 class
class derived : public Base1, public Base2{
    public:
    void show(){
        cout <<"The value of base1 is "<<base1int<<endl;
        cout <<"The value of base2 is "<<base2int<<endl;
        cout << "Sum is "<<base1int+base2int<<endl;
    }
};
int main() {
    derived d;
    d.set_base1int(8);
    d.set_base2int(10);
    d.show();
}
