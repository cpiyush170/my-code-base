#include <iostream>
using namespace std;

class Base{
    public:
        int var_base;
        void display(){
            cout << "Displaying base class variable base "
            <<var_base<<endl; 
        }
};
class Derived : public Base{
    public:
        int var_derived;
        void display(){
            cout << "Displaying base class variable "
            <<var_base<<endl;
            cout << "Displaying derived class "
            <<var_derived<<endl; 
        }
};
int main() {
   Base *base_class_pointer;
   Base obj_base;
   Derived obj_derived;
   // base class pointer pointing to derived class obj
   base_class_pointer = &obj_derived;

   base_class_pointer->var_base = 40;
   // base class pointer will bind to base class functions,
   // even if we bind it to derived class object
   base_class_pointer->display();
   Derived *derived_class_pointer;
   derived_class_pointer =  &obj_derived;
   derived_class_pointer->var_derived = 90;
    derived_class_pointer->var_base = 90;
   derived_class_pointer->display();
}
