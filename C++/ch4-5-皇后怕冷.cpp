#include <iostream>
#include <cmath>
using namespace std;

float temp(float c, float h, float s) {
    float t;
    t = c - (h / 1000) * 6 - pow(s,0.5);
    return t;
}
    
int main()
{
    float x;
    x = temp(20, 1545, 12);
    cout << x;
    
    return 0;
}
