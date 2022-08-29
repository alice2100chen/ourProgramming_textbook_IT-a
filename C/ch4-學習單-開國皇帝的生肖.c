#include <stdio.h>

int main(){
    char * z[12] = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
    char * emperor[9] = {"嬴政","劉邦","司馬炎","楊堅","李淵","趙匡胤","忽必烈","朱元璋","皇太極"};
    int birth[9] = {-259,-256,236,541,566,927,1215,1328,1592};
    int i,s;

    for (i=0; i<9; i++) {
      if (birth[i] > 0) {
        s = (birth[i] - 4) % 12;
        s = (s+12) % 12;     
      }
      else {
        s = (birth[i] - 4 + 1) % 12;     
        s = (s+12) % 12;  
      }
      printf("%s\t的生肖:%s\n", emperor[i], z[s]);
    }  
    return 0;
}