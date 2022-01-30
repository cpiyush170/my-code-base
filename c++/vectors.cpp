#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v1){
    for(int i=0; i<v1.size(); i++)
    {
        cout << v1[i]<<" ";
    }
    cout << endl;
}
int main() {
    vector<int> vec1;
    int element;
    for(int i=0; i<4; i++)
    {
        cout << "Enter an element in vector "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    vector<int> :: iterator iter = vec1.end();
    vec1.insert(iter,580);
    display(vec1);
    vector<int> vec2(3,100);
    vector<int> :: iterator it;
    it = vec2.begin();
    it = vec2.insert(it,200);
    display(vec2);
}
