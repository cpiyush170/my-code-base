#include <iostream>
using namespace std;
/* 
Initialization list is a way to give values to data
members of class without writing it inside constructor body
Syntax for initialization list in constructor

constructor (argument-list) : initialization-section
{
    assignment/other code..
}
eg. - 
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){
            //constructor body
        }
};
 */
 class Test{
    int a;
    int b;

    public:
        //Test(int i, int j) : a(i), b(j)
        //Test(int i, int j) : a(i), b(2+j)
        Test(int i, int j) : a(i), b(a+j)
        {
            cout << "Constructor exectued "<<endl;
            cout << "Value of a "<< a << endl;
            cout << "Value of b "<< b << endl;
        }
};
int main() {
    Test t(4,8);
}
