#include <stdio.h>

void tatoo(int, char * []);
int main(){
    char * s[11] = {"★","☆","✪","✩","✫","✬","✭","✮","✯","✰","✡"};
    int n;
    printf("給一個數字:");
    scanf("%d", &n);
    if (n > 11)
       printf("數字太大");
    else 
        tatoo(n,s);        

    return 0;
}

void tatoo(int x, char * symbol[]){
    for (int i=0; i<x; i++)
        printf("%s ", symbol[i]);
}