#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
  
    for(int i=1; i<=t; i++){

    int num;
    cin>>num;
    int factors = 0;
    for(int div = 2; div*div<=num; div++){
        
        if(num % div == 0){
            factors = factors + 1;
            break;
        }
            
    }

    if(factors == 0)
    cout << num << " is prime "<<endl;
    else
    cout << num << " is not prime "<<endl;
    }
    
}
