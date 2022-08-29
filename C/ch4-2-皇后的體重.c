#include <stdio.h>

int main()
{
    char * queen[2] = {"趙飛燕","楊貴妃"};
    float weight[2] = {118, 138};
    int t[2] = {250, 600};
    printf("%s的體重為%f公斤\n", queen[0], weight[0] * t[0] / 1000);
    printf("%s的體重為%f公斤\n", queen[1], weight[1] * t[1] / 1000);

    return 0;
}