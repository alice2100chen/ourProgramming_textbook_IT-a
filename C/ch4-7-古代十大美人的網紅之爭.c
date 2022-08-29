#include <stdio.h>

void swap_beauty(char * [], int, int);
void swap_vote(int [], int, int);
void one_bubble(char * [], int [], int);
void print_beauty(char * [], int);

int main(){
    char * beauty[10] = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"};
    int vote[10] = {78, 62, 86, 70, 12, 16, 38, 15, 22, 13};
    int i;
    
    for(i = 1; i < 10; i++){
    one_bubble(beauty, vote, 10-i);
    printf("第%d回合結果:", i);
    print_beauty(beauty, 10);
    }
    printf("排序結束\n");
    
    return 0;
}

void swap_beauty(char * beauty[], int x, int y){
    char * temp = beauty[x];
    beauty[x] = beauty[y];
    beauty[y] = temp;
}

void swap_vote(int vote[], int x, int y){
    int temp = vote[x];
    vote[x] = vote[y];
    vote[y] = temp;
}

void one_bubble(char * beauty[], int vote[], int end_index){
    int j;
    for(j = 0; j < end_index; j++){
        if(vote[j] > vote[j+1]){
            swap_vote(vote, j, j+1);
            swap_beauty(beauty, j, j+1);
        }
    }
}

void print_beauty(char * beauty[], int arr_len){
    int k;
    for(k = 0; k < arr_len; k++)
        printf("%s\t", beauty[k]);
    printf("\n");
}