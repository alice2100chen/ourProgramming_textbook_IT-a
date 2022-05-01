#include <iostream>
#include <string>
using namespace std;

void tatoo(int x, string symbol[]){
    for (int i=0; i<x; i++)
        cout << symbol[i] << endl;
}
int main(){
    string s[11] = {"★","☆","✪","✩","✫","✬","✭","✮","✯","✰","✡"};
    int n;
    cout << "給一個數字:";
    cin >> n;
    if (n > 11)
        cout << "數字太大";
    else 
        tatoo(n,s);        

    return 0;
}
