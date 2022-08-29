#include <stdio.h>

int main(){
  int score[5] = {0,0,0,0,0};
  int i;
  for (i=0; i<5; i++){
    printf("請輸入分數:");
    scanf("%d", &score[i]);
    if (score[i] < 70)
      printf("可\n");
    else if (score[i] < 90)
      printf("良\n");
    else
      printf("優\n");
  }
 
    return 0;
}