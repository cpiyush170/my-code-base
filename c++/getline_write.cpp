#include <iostream>
using namespace std;

int main() {
//the function getline() and write provide a more efficient
// way to handle line-oriented inputs and outputs.
// getline reads the complete line of text that ends
// with the new line character
// the function can be invoked using the cin object

// syntax: cin.getline(variable, size)

    char line[100];

    // get the input
    cin.getline(line,20);
    

    // print the data
    cout.write(line,20);
    cout<<endl;
}
