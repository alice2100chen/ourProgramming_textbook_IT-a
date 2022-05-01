
#include <iostream>
using namespace std;

int main()
{
    int data[9] = {50, 62, 55, 64, 70, 50, 80, 71, 52};
    int i,t;
    t = 71;
    for (i=0; i<=9; i++) {
        if (data[i] == t) {
            cout << "發現搜尋目標" << t << ", 位於陣列中索引值為 " << i << " 的位置" <<endl;
        }
    }
    return 0;
}