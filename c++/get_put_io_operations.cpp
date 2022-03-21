#include <iostream>
using namespace std;
// classes istream and ostream have predefined functions
// get() and put() to handle single character I/O operations

int main() {
    char data;
    int count = 0;
    // get the data
    cin.get(data);
    while(data != '\n')
    {
    // print the data
    cout.put(data);
    count++;
    cin.get(data);
    }
    cout<<"\n"<<count;
}
