#include <iostream>
using namespace std;

class Diagonal{
private:
    int *A;
    int n;
public:
// constructor
    Diagonal(int n){
        this->n = n;
        A = new int[10];
    }
// destructor
    ~Diagonal(){ delete []A; }
    void set(int,int,int);
    int get(int,int);
    void display();
};


void Diagonal :: set(int i, int j, int x){
    if(i == j)
    {
        A[i-1] = x;
    }
}
int Diagonal :: get(int i, int j){
    if(i == j) return A[i-1];
    else return 0;
}

void Diagonal :: display(){

    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i == j)
            cout<<A[i]<<" ";
            else
            cout<<"0 ";
        }
        cout<<"\n";
    }
}
int main() {
   
   Diagonal m(4);
   m.set(1,1,3);
   m.set(2,2,5);
   m.set(3,3,9);
   m.set(4,4,7);
   m.display();

}
