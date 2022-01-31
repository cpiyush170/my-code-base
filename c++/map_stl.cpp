#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string,int> marks;
    marks["John"] = 94;
    marks["Jack"] = 85;
    marks["Joe"] = 55;
    marks.insert({{"Koe",12}, {"Jss",49}});
    map<string,int> :: iterator it;
    for(it = marks.begin(); it != marks.end(); it++)
    {
        cout << (*it).first << " : "<< (*it).second<<endl;
    }

}
