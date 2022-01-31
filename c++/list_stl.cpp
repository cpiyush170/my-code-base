#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++){
        cout << *it <<" ";
    }
    cout << endl;
}
int main() {
    list<int> list1; // list of 0 length

    list1.push_back(44);
    list1.push_back(87);
    list1.push_back(48);
    list1.sort(); // to sort list
    display(list1);

    list<int> list2(3); // empty list of size 5
    list<int> :: iterator iter;
    iter = list2.begin();
    for(iter = list2.begin(); iter!=list2.end(); iter++){
        cin>>*iter;
    }

    display(list2);
    // list2.pop_back();
    // display(list2);
    // list2.pop_front();
    // display(list2);
    list2.remove(94);
    list2.sort();
    list1.merge(list2);
    display(list1);
    


}
