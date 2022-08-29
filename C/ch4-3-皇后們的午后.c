#include <stdio.h>

int main()
{
    float f = 77;
    float c;
    c = (f-32) * (5/9.0);
    printf("攝氏:%f度\n", c);
    
    if (c < 20) {
        printf("畫畫");
    }
    else if (c < 24) {
        printf("彈琴");
    }
    else if (c < 27) {
        printf("下棋");
    }
    else if (c < 30) {
        printf("賞花");
    }
    else {
        printf("水療SPA");
    }
      
    return 0;
}