#include <iostream>
using namespace std;

int f(int x){
    x = x * x;
    return x;
}
int main(){
    int a,b;
    a = 3;
    b = f(a);
    cout << b;
    return 0;
}
