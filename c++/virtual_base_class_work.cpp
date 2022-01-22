#include <iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void setNum(int a){
        roll_number = a;
    }
    void printNum(){
        cout << "your roll no is "<<roll_number <<endl;
    }
};
class Test : virtual public Student{
    protected:
    float maths, phy;
    public:
    void set_marks(float m1,float m2)
    {
        maths = m1;
        phy = m2;
    }
    void printMarks(){
        cout << "Marks in maths is "<<maths<<endl;
        cout << "Marks in physics is "<<phy<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void printScore(){
        cout << "Your PT score is "<<score <<endl;
    }
};
class Result: public Test, public Sports{
    private:
    float total;
    public:
    void display(){
       total = maths + phy + score;
       printNum();
       printMarks();
       printScore();
       cout << " Total is "<<total<<endl;
    }
};
int main() {
    Result r1;
    r1.setNum(20);
    r1.set_marks(49.7,67.8);
    r1.set_score(49);
    r1.display();
}
