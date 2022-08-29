#include <stdio.h>

int main(){
    char * z[12] = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
    int y,x,s;
    
    printf("西元:");
    scanf("%d", &y);
    s = (y - 4) % 12;
    printf("生肖%s\n", z[s]);

    return 0;
}