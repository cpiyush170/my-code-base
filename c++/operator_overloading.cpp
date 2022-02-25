#include <iostream>
#include <string>
using namespace std;
// By using operator overloading we can define
// the behaviour of operators and give them new definitions

struct YoutubeChannel{
    string Name;
    int SubscribersCount;
    YoutubeChannel (string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
};
// overloading <<(insertion operator)

void operator<<(ostream& COUT, YoutubeChannel& ytChannel){
    COUT << "Name: "<<ytChannel.Name << endl;
    COUT << "Subscribers: "<<ytChannel.SubscribersCount << endl;
}

int main() {
    YoutubeChannel yt1("ABC",4000);
   // overloading << (insertion operator)
   cout << yt1;
}
