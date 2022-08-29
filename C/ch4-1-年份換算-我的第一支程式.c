#include <stdio.h>

int main()
{
    int x, y, z;
    printf("請輸入西元:");
    scanf("%d", &x);
    y = 1911;
    z = x - y;
    printf("西元 %d是民國 %d", x, z);

    return 0;
}