#include <iostream>
using namespace std;

int main()
{
    int life[9] = {50, 62, 55, 64, 70, 50, 80, 71, 52};
    int i, sum = 0;
    float average;

    for (i=0; i<9; i++) {
        sum = sum + life[i];
    }
    
    average = sum / 9.0;
    cout << "平均:" << average;
    
    return 0;
}
