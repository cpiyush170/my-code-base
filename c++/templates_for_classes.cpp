#include <iostream>
using namespace std;
// Templates are template for your classes, they helps
// you to write generic classes and later make them
// customs passing them different data types, this way
// it make use of code reuseability by using same class
// with different datatypes depending upon your requirement
// we are passing datatype as a variable
template <class T>
class vector{
    int size;

    public:

    T* arr;
    vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v){
        T d = 0;
        for(int i=0; i<size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main() {
    vector <float>v1(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 3.0;
    v1.arr[2] = 1.1;
    vector <float>v2(3);
    v2.arr[0] = 1.8;
    v2.arr[1] = 0.1;
    v2.arr[2] = 1.5;
    float a = v1.dotProduct(v2);
    cout << a << endl;
}
