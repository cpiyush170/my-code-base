#include <iostream>
using namespace std;

class Inc{
private:
    int count;
public:
// default constructor
    Inc(){
        count = 0;
    }
// parameterized constructor
    Inc(int C){
        count = C;
    }
    Inc operator ++(){
        return Inc(++count);
    }
// post decrement - we need to specify int in argument
    Inc operator ++(int){
        return Inc(count++);
    }
    void display(){
        cout<<count<<endl;
    }
};
int main() {
    Inc a, b(10), c, d, e(5), f(10);
    cout<<"Before using the operator ++()\n";
    cout<<"a = ";
    a.display();
    cout<<"b = ";
    b.display();
    ++a;
    b++;
    cout<<"After using the operator ++()\n";
    cout<<"a = ";
    a.display();
    cout<<"b = ";
    b.display();
    c = ++a;
    d = b++;
    cout<<"c = ";
    c.display();
    cout<<"d = ";
    d.display();
}
