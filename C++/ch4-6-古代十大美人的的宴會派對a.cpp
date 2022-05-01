
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string beauty[10] = {"西施","貂蟬","王昭君","楊貴妃","馮小憐","蘇妲己","趙飛燕","鄭旦","褒姒","甄宓"};
    string t;
    int i;
    cout << "請問芳名: ";
    cin >> t;

    for (i=0; i<10; i++) {
        if (beauty[i] == t) {
            cout << "發現搜尋目標" << t << ", 位於清單中索引值為 " << i << " 的位置";
        }
    }

    return 0;
}

