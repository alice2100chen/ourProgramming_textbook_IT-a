#include <iostream>
#include <string>
using namespace std;

void tatoo(int x){
    for (int i=0; i<x; i++)
        cout << "*";
    cout << endl;
}
int main(){
    int n,i;
    cout << "給一個數字:";
    cin >> n;
    for (i=1; i<+n; i++)
        tatoo(i);
    return 0;
}
