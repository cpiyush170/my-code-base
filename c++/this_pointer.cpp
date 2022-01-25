#include <iostream>
using namespace std;
// this is a keyword which is a pointer which points to
// object which invokes the member function
class A{
    int a;
    public:
        A& setData(int a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout << "Value of a is " << a << endl;
        }
};
int main() {
   A a1;
   a1.setData(4).getData();
   a1.getData();

}
