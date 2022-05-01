#include <iostream>
using namespace std;

int main()
{
    float f = 77;
    float c;
    c = (f-32) * (5/9.0);
    cout << "攝氏:" << c << "度" << endl;
    
    if (c < 20) {
        cout << "畫畫";
    }
    else if (c < 24) {
        cout << "彈琴";
    }
    else if (c < 27) {
        cout << "下棋";
    }
    else if (c < 30) {
        cout << "賞花";
    }
    else {
        cout << "水療SPA";
    }
      
    return 0;
}
