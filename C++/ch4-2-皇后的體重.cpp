#include <iostream>
using namespace std;

int main()
{
    string queen[2] = {"趙飛燕","楊貴妃"};
    //int height = {160, 164};
    float weight[2] = {118, 138};
    int t[2] = {250, 600};
    cout << queen[0] << "的體重為" << weight[0] * t[0] / 1000 << "公斤" << endl;
    cout << queen[1] << "的體重為" << weight[1] * t[1] / 1000 << "公斤";

    return 0;
}
