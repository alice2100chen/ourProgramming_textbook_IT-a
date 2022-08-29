#include <stdio.h>

int main(){
  int score[5] = {0,0,0,0,0};
  int i,sum;
  float avg;
  sum = 0;
  for (i=0; i<5; i++){
    printf("請輸入分數:");
    scanf("%d", &score[i]);
    sum = sum + score[i];
  }
  avg = sum / 5.0;
  printf("平均:%f\n", avg);
  return 0;
}