#include <iostream>
using namespace std;

int main(){
  int score[4] = {83,92,76,96};
  int i,sum;
  sum = 0;
  for (i=0; i<4; i++){
    sum = sum + score[i];
  }
  cout << sum <<endl;
  return 0;
}