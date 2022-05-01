/*
Ch5-1-bubbleSort.cpp
實作氣泡排序演算法(函數版)
函數: swap, one_bubble, print_array
版本: 1.0
*/

#include <iostream>
#include <string>

using namespace std;

// ----- 函數swap_beauty: 交換美人名字陣列beauty中，位置x, y的兩筆資料 -----
void swap_beauty(string beauty[], int x, int y){
    string temp = beauty[x];
    beauty[x] = beauty[y];
    beauty[y] = temp;
}
// ----- 函數swap_vote: 交換票數陣列vote中，位置x, y的兩筆資料 -----
void swap_vote(int vote[], int x, int y){
    int temp = vote[x];
    vote[x] = vote[y];
    vote[y] = temp;
}

// ----- 函數one_bubble: 將目前票數最大的美人名字與對應的票數移到最右邊 -----
void one_bubble(string beauty[], int vote[], int end_index){
    for(int j = 0; j < end_index; j++){ // end_index之後(右邊)的數已排好，不需要再排
        if(vote[j] > vote[j+1]){        // 相鄰兩數比大小，當左邊比右邊大時
            swap_vote(vote, j, j+1);         // 交換兩個票數(大的右移)
            swap_beauty(beauty, j, j+1);     // 同上，交換兩個美人的名字(大的右移)
        }
    }
}

// -----函數print_beauty: 印出beauty中的元素 -----
void print_beauty(string beauty[], int arr_len){
    for(int i = 0; i < arr_len; i++){
        cout << beauty[i] << " ";
    }
    cout << endl;
}

int main(){
    // ===== 主程式開始 =====
    string beauty[10] = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"};
    int vote[10] = {78, 62, 86, 70, 12, 16, 38, 15, 22, 13};

    int vote_count = sizeof(vote) / sizeof(int);    // 資料數 = 陣列長度 = 10個
    // ----------
    for(int i = 0; i < vote_count - 1; i++){    // 5個數字，只需排4次，最後一個數會自動排好
        one_bubble(beauty, vote, vote_count-1-i);       // 最右邊的i個數已排好，不需要再排
        cout << "第" << i << "回合結果: ";        // 印出每回合的結果
        print_beauty(beauty, vote_count);
    }
    cout << "排序結束" << endl;
    // ===== 主程式結束 =====
    return 0;
}

