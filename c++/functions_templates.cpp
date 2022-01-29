#include <iostream>
using namespace std;

// funtion templates - templates for functions
template <class T1, class T2>
float funcAvg(T1 a,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
template <class T>
class test{
    public:
    T data;
    test(T a){
        data = a;
    }
    void display();
};
// defining display function of template class outside class
template <class T>
void test <T> :: display(){
    cout<<data<<endl;
}
int main() {
    cout << funcAvg(5,2) << endl;
    test <char> t('A');
    t.display();
}
