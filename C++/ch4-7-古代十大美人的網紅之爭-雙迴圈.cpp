#include <iostream>
#include <string>
using namespace std;

int main(){
    string beauty[10] = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"};
    int vote[10] = {78, 62, 86, 70, 12, 16, 38, 15, 22, 13};
    int i, j, tmp_vote, k;
    string tmp_beauty;

    for(i=1; i<10; i++){
        for(j=0; j<10-i; j++){
            if(vote[j] > vote[j+1]){
                tmp_vote = vote[j];
                vote[j] = vote[j+1];
                vote[j+1] = tmp_vote;
                tmp_beauty = beauty[j];
                beauty[j] = beauty[j+1];
                beauty[j+1] = tmp_beauty;
            }
        }
        cout <<"第"<< i <<"回合結果:";
        for (k=0;k<10;k++)
            cout << beauty[k] <<"\t";
        cout <<endl;
    }
    cout << "排序結束" << endl;

    return 0;
}