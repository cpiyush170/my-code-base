#include <iostream>
using namespace std;

// exception handling - try,throw,catch
void divide(int x,int y,int z)
{
    cout<<"Inside function \n";

    if((x-y)!= 0)
    {
        int r = z/(x-y);
        cout<<"result = "<<r<<"\n";
    }
    else
    {
        throw (x-y);
    }
}
int main() {
    
    int x, y;
    cout<<"Enter values of x & y \n";
    cin>>x;
    cin>>y;
    int a = x - y;

    try{
        if(a!=0)
        cout<<"Result (x/a) = "<<x/a;
        else
        throw (a);
    }
    catch(int i){
        cout<<"Exception caught a= "<<a<<"\n";
    }

    try{
        cout<<"\nInside try block \n";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i){
        cout<<"Caught exception \n";
    }
}
