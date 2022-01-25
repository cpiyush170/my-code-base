#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout << "Real part is "<<real<<endl;
            cout << "Imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main() {
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex();
    // also we can use ptr->setData(4,9);
    (*ptr).setData(4,9); 
    ptr->getData(); 

    
}
