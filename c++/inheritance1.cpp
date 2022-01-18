#include <iostream>
using namespace std;

// base class - (parent class)
class Employee{
    public:
    int id;
    float salary;
    Employee(int InpId){
        id = InpId;
        salary = 49;
    }
    // default constructor of employee - 
    // coz - derived class automatically call default
    // constructor of its base class
    Employee (){};
};
// derived class syntax

/* class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
{
     members/methods/etc..
} */

/* Note: 1. Default visiblity mode is private
 2. Private Visibility mode : public members of base
 class becomes private memebers of derived class
 3. Public Visibility mode : public members of base
    class becomes public memebers of derived class
 4. Private members of base class are never inherited



creating a programmer class derived from emloyee class
*/
class Programmer : public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout << id <<endl;
    }
};
int main() {
    Employee john(1);
    cout << john.salary <<endl;
    Employee joe = Employee(3);
    cout << joe.salary <<endl;
    Programmer kevin(18);
    cout << kevin.languageCode<<endl;
    kevin.getData();
    cout << kevin.id <<endl;
}
