#include <stdio.h>

int main()
{
    int data[9] = {50, 62, 55, 64, 70, 50, 80, 71, 52};
    int i,t;
    t = 71;
    for (i=0; i<=9; i++) {
        if (data[i] == t) {
            printf("發現搜尋目標 %d, 位於清單中索引值為 %d 的位置", t, i);
        }
    }

    return 0;
}