#include <iostream>
#include <cstring>
using namespace std;

class CWH{

    protected:
        string title;
        float rating;
    public:

        CWH(string s, float r){
            title = s;
            rating = r;
        }

    virtual void display(){}
};

class CWHVideo: public CWH{
    float videoLength;
    public:

    CWHVideo(string s, float r, float vl): CWH(s,r){
        videoLength = vl;
    }
    void display(){
        cout << "This is an amazing video with title "
        <<title<<endl;
        cout << "This video has rating "
        <<rating<<endl;
        cout << "Length of video is "
        <<videoLength<<endl;
    }
};
class CWHText: public CWH{
    int words;
    public:
    // here we are calling base class constructor
    // with s and r (sending s and r to base class constructor)
    CWHText(string s, float r, int wc): CWH(s,r){
        words = wc;
    }
    void display(){
        cout << "This is an amazing text tut with title "
        <<title<<endl;
        cout << "It has rating "
        <<rating<<endl;
        cout << "No. of words in this tutorial "
        <<words<<endl;
    }
};
int main() {
    string title;
    float rating, vlen;
    int words;

    // for video obj
    title = "Nodejs tutorial";
    rating = 4.5;
    vlen = 4.3;
    CWHVideo video(title,rating,vlen);
    video.display();

    // for text obj
    title = "Nodejs tutorial text";
    rating = 2.4;
    words = 203;
    CWHText text(title,rating,words);
    text.display();

    // creating a ptr array and pointing 
// it towards obj of text and video
    CWH* ptr[2];
    ptr[0] = &video;
    ptr[1] = &text;
    ptr[0]->display();
    ptr[1]->display();
/* Rules for virtual functions:
1. They can't be static
2. They are accessed by object pointers 
3. Virtual functions can be friend of another class*/
}
