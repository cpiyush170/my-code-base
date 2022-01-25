#include <iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout << "Code of this item is "<<id<<endl;
            cout << "Price of this item is "<<price<<endl;
        }
};
int main() {
    int size = 3;
    // array of object
    ShopItem *ptr = new ShopItem[size];
    int p;
    float q;
    for(int i=0; i<size; i++)
    {
        cout << "Enter id and price of item "<<i+1<<endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        (ptr+i)->setData(p,q);
    }
    cout << "\n";
    ShopItem *ptrTemp = ptr;
    for(int i=0; i<size; i++)
    {
        cout << "Item number: "<<i+1<<endl;
        (ptrTemp+i)->getData();
    }
}
