#include <stdio.h>

int main(){
  int score[4] = {83,92,76,96};
  int i,sum;
  sum = 0;
  for (i=0; i<4; i++){
    sum = sum + score[i];
  }
  printf("%d", sum);
  return 0;
}