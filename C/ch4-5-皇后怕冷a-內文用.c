#include <stdio.h>

float temp(float, float);
int main()
{
    float x;
    x = temp(20, 1545);
    printf("%f\n", x);
    
    return 0;
}

float temp(float c, float h) {
    float t;
    t = c - (h / 1000) * 6;
    return t;
}