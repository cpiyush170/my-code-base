#include <iostream>
using namespace std;

void addMatrix(int mat1[][2], int mat2[][2]){

    int mat3[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            mat3[i][j] = mat1[i][j] + mat2[i][j];

            cout << mat3[i][j]<<" ";
        }
        cout <<endl;
    } 
}
void mulMatrix(int mat1[][2], int mat2[][2]){

    int result[2][2];
  
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
// intializing every element with zero of resultant matrix
            result[i][j] = 0;
          
// helping to access col and row
            for(int k=0; k<2; k++){
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
            cout << result[i][j]<<" ";
        }
        cout << endl;
    }
}
int main() {
    int mat1[2][2] = {
        {1,1},
        {2,2}
    },
    mat2[2][2] = {
        {1,1},
        {2,2}
    };
    addMatrix(mat1,mat2);
    mulMatrix(mat1, mat2);
    
}
