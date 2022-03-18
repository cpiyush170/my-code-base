/*Unary operator overloading using friend function*/
#include <iostream>

using namespace std;

class Complex
{
private:
    int real, img;
public:
    // default constructor
    Complex() {}

    // parameterized constructor
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    // defining friend prototype for operator (-) overloading
    friend void operator-(Complex &c);
};

void operator-(Complex &c)
{
    c.real = -c.real;
    c.img = -c.img;
}

int main()
{
    Complex c(10, 20);
    cout << "Real and imaginary value before operation: ";
    c.display();

    -(c); // we overloaded (-) operator to make negative values
    cout << "Real and imaginary value after operation: ";
    c.display();
}
