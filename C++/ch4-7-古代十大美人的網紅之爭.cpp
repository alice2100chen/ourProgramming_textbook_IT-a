#include <iostream>
#include <string>
using namespace std;

void swap_beauty(string beauty[], int x, int y){
    string temp = beauty[x];
    beauty[x] = beauty[y];
    beauty[y] = temp;
}

void swap_vote(int vote[], int x, int y){
    int temp = vote[x];
    vote[x] = vote[y];
    vote[y] = temp;
}

void one_bubble(string beauty[], int vote[], int end_index){
    int j;
    for(j = 0; j < end_index; j++){ 
        if(vote[j] > vote[j+1]){        
            swap_vote(vote, j, j+1);         
            swap_beauty(beauty, j, j+1);     
        }
    }
}

void print_beauty(string beauty[], int arr_len){
    int k;
    for(k = 0; k < arr_len; k++){
        cout << beauty[k] << "\t";
    }
    cout << endl;
}

 int main(){
    string beauty[10] = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"};
    int vote[10] = {78, 62, 86, 70, 12, 16, 38, 15, 22, 13};
    int i;

    for(i = 1; i < 10; i++){    
        one_bubble(beauty, vote, 10-i);       
        cout << "第" << i << "回合結果: ";       
        print_beauty(beauty, 10);
    }
    cout << "排序結束" << endl;

    return 0;
}

