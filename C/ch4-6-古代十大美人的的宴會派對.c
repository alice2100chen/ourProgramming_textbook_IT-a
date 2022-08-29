#include <stdio.h>
#include <string.h>

int main()
{
    char * beauty[10] = {"西施","貂蟬","王昭君","楊貴妃","馮小憐","蘇妲己","趙飛燕","鄭旦","褒姒","甄宓"};
    char t[100];
    int i, found;
    printf("請問芳名:");
    scanf("%s", t);
    
    found = -1;
    for (i=0; i<10; i++) {
        if (strcmp(beauty[i],t)==0) {
            found = i;
            printf("發現搜尋目標 %s, 位於清單中索引值為 %d 的位置", t, found);
        }
    }
    
    if (found == -1) {
        printf("哭哭%s不在邀請名單上", t);
    }

    return 0;
}

