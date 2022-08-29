#include <stdio.h>
#include <math.h>

float temp(float, float, float);
int main()
{
    float x;
    x = temp(20, 1545, 12);
    printf("%f\n", x);
    
    return 0;
}

float temp(float c, float h, float s) {
    float t;
    t = c - (h / 1000) * 6 - pow(s,0.5);
    return t;
}