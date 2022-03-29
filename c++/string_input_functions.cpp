#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string str;

// taking string input using getline()
// syntax: getline(&istream is, &string str)
//is: It is an object of istream class and tells the function about the stream from where to read the input from.
//str: It is a string object, the input is stored in 
//this object after being read from the stream.
    getline(cin,str);

    cout<<str<<endl;

// inserting a character into string

    str.push_back('s');

// displaying string
    cout<<str<<endl;

// removing a character from string
    str.pop_back();

    cout<<str<<endl;

}
