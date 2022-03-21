#include <iostream>
using namespace std;
int main() {

    cout<<"Implementing ios::width\n";
    int c = 123,d = 35;
    cout.width(5);
    cout<<c<<endl;
    cout.width(5);
    cout<<d<<endl;
    // using precision with width
    cout.precision(2);
    cout.width(5);
    cout<<5.6705<<endl;
    // using fill
    cout.fill('*');
    cout.width(10);
    cout<<1234<<endl;

    //using setf
    cout.setf(ios::showpos);
    cout<<100<<endl;
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<"OUTPUT 1"<<"\n";
}
