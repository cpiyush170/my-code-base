#include <iostream>
using namespace std;

class Weight{
private:
    int kg;
public:
// default constructor
    Weight(){ kg = 0; }
// parameterized constructor
    Weight(int x){
        kg = x;
    }
    void printWeight(){
        cout<<"Weight in kg: "<<kg<<endl;
    }
    Weight operator ++(){
        
        return ++kg;
    }
};
int main() {
    Weight obj;
    ++obj; // obj.operator++()
    obj.printWeight();
}
