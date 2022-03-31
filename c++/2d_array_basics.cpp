#include <iostream>
using namespace std;

int main() {
    
    // basic method to create array
    int B[3][4];

// method to create array using pointers
    int *A[3]; // array of pointers

    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>A[i][j];
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    // second method to create array using double pointer
    int **Arr;
    Arr = new int *[3];
    for(int i=0; i<3; i++){
        Arr[i] = new int[4];
    }

}
