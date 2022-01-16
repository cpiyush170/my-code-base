// Program to illustrate parameterized constructor 
#include <iostream>
#include <cmath>
using namespace std;
class Point{
    int x,y;
    public:
    // parameterized constructor -
    // that takes parameters
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout << "The point is ("<<x<<","<<y<<")"<<endl;
    }
    friend double distBwtwoPoints(Point, Point);
};
double distBwtwoPoints(Point p1, Point p2){
    double rs = sqrt(pow((p1.x - p2.x),2) + 
    pow((p1.y - p2.y),2));
    return rs;
}
int main() {
    Point p(1,0);
    p.displayPoint();
    Point q(70,0);
    q.displayPoint();
    double res = distBwtwoPoints(p,q);
    cout << res <<endl;
}
