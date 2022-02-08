#include <iostream>
using namespace std;

int* func(int n){

    int *p;
    // creating array of size n in heap section and
// storing address of array's starting element
    // in pointer p
    p = (int*)malloc(n*sizeof(int));

    // taking input from user
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    return p; // returning address of first element
    // from array created in heap section of memory
    // and we need pointer to get it's address in main
    // function
}
int main() {
    int *A;
    A = func(4);
    for(int i=0; i<4; i++){
        cout<<A[i]<<" ";
    }

}
