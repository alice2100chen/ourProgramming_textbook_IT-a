#include <iostream>
#include <string>
using namespace std;

int main()
{
    string beauty[10] = {"西施","貂蟬","王昭君","楊貴妃","馮小憐","蘇妲己","趙飛燕","鄭旦","褒姒","甄宓"};
    string t;
    int i, found;
    cout << "請問芳名: ";
    cin >> t;
    
    found = -1;
    for (i=0; i<10; i++) {
        if (beauty[i] == t) {
            found = i;
            cout << "發現搜尋目標 " << t << ", 位於清單中索引值為 " << found << " 的位置" << endl;
        }
    }
    
    if (found == -1) {
        cout << "哭哭" << t << "不在邀請名單上" << endl;
    }

    return 0;
}

