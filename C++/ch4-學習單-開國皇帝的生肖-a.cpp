#include <iostream>
#include <string>
using namespace std;

int main(){
    string z[12] = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
    int y,x,s;
    
    cout << "西元:";
    cin >> y;
    s = (y - 4) % 12;
    cout << "生肖:" << z[s] << endl;

    return 0;
}