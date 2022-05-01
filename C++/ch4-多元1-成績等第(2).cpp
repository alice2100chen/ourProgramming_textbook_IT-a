#include <iostream>
using namespace std;

int main(){
  int score[5] = {0,0,0,0,0};
  int i, found;
  found = 0;
  for (i=0; i<5; i++){
    cout <<"請輸入分數:";
    cin >> score[i];
    if (score[i] < 70)
      cout << "可" <<endl;
    else if (score[i] < 90)
      cout << "良" <<endl;
    else {
      cout << "優" <<endl;
      found = found + 1;
    }
  }
  cout << "共" << found << "筆達到「優」等" <<endl;
  return 0;
}