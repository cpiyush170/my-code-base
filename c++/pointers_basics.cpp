#include <iostream>
using namespace std;

int main() {
    
    int firstValue = 5, secondValue = 15;
    char thirdValue = 'a';

    int *p1, *p2;
    char *p3;
    
    p1 = &firstValue;
    p2 = &secondValue;
    p3 = &thirdValue;

  *p1 = 10;
  *p2 = *p1;
  p1 = p2; // p1 = address stored in p2 
  *p1 = 20;
  *p3 = 'b'; // value of variable being pointed by p3
  cout<<firstValue<<endl;
  cout<<secondValue<<endl;
  cout<<thirdValue<<endl;

}
