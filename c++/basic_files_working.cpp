#include <iostream>
#include <fstream>

using namespace std;

/*Useful classes for working with files in C++ are: 
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream  --> derived from fstreambase 

In order to work with files in C++, you will have to 
open it. primarliy, there are two ways:
1. using the constructor
2. using the member function open() of the class */
int main()
{
    // string s = "Hello World";
    // // writing in file
    // // here we're creating obj of ofstream
    // // using constructor and writing in it
    // ofstream out("sample.txt");
    // out << s;

    // reading from file
    // here we're creating obj of ofstream
    // using constructor and reading data from file
    ifstream in("sample.txt");
    string st2;
    // it will not read after spaces
    // in >> st2; // put data from sample.txt into st2
    // use getline to read whole line
    getline(in, st2);
    cout << st2;
}
