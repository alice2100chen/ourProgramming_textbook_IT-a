#include <iostream>
using namespace std;

int main(){
  int score[5] = {0,0,0,0,0};
  int i,sum;
  float avg;
  sum = 0;
  for (i=0; i<5; i++){
    cout <<"請輸入分數:";
    cin >> score[i];
    sum = sum + score[i];
  }
  avg = sum / 5.0;
  cout << "平均:" << avg <<endl;
  return 0;
}