#include <stdio.h>

void tatoo(int x){
    for (int i=0; i<x; i++)
        printf("*");
    printf("\n");
}
int main(){
    int n,i;
    printf("給一個數字:");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        tatoo(i);
    return 0;
}
