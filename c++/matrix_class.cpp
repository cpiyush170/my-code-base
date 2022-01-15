#include <iostream>
#define MAX_SIZE 10

using namespace std;

int n;

class Matrix{
  
    int item[MAX_SIZE][MAX_SIZE];

public:
    void getMatrix();
    void displayMatrix();
    Matrix addMatrix( Matrix m);
    void mulMatrix(Matrix &mat, Matrix m);
};

// method to input matrix
void  Matrix:: getMatrix(){
    cout << "Enter the order of square matrix(nXn) "<<endl;
    cin >> n;
    cout << "Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>item[i][j];
        }
    }
}
// displays matrix
void Matrix:: displayMatrix(){
    cout <<"The elements of matrix are "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<item[i][j]<<" ";
        }
        cout <<endl;
    }
}
// add matrix and return a matrix object;
Matrix Matrix:: addMatrix(Matrix m){
    Matrix temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp.item[i][j] = item[i][j] + m.item[i][j];
        }
    }
    return (temp);
}

// multiply matrix, we take reference of result matrix to overwrite data there
void Matrix:: mulMatrix(Matrix &mat, Matrix m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat.item[i][j] = 0;
            
            for(int k=0; k<n; k++){
                mat.item[i][j] += item[i][k] * m.item[k][j];
            }
        }
    }
}

int main() {
    Matrix X,Y, Result,Z;
    X.getMatrix();
    Y.getMatrix();
    Result = X.addMatrix(Y);
    Result.displayMatrix();
    X.mulMatrix(Result,Y);
    Result.displayMatrix();

}
