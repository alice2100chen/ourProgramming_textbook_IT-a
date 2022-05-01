#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "請輸入西元:";
    cin >> x;
    y = 1911;
    z = x - y;
    cout << "西元"<< x << "是民國" << z << endl;

    return 0;
}