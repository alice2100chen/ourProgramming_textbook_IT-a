
#include <iostream>

using namespace std;

float temp(float c, float h) {
    float t;
    t = c - (h / 1000) * 6;
    return t;
}
    
int main()
{
    float x;
    x = temp(20, 1545);
    cout << x;
    
    return 0;
}
