#include <stdio.h>

int f(int x){
    x = x * x;
    return x;
}
int main(){
    int a,b;
    a = 3;
    b = f(a);
    printf("%d", b);
    return 0;
}
