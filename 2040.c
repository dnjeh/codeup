#include <stdio.h>
int main() {
    int i, cnt=0, t[3]={1, 2};
    for(i=0;i<10;i++) {
        scanf("%d", &t[2]);
        if(t[0]==t[2]||t[1]==t[2]) {
            cnt++;

        }
        if(t[1]!=t[2]) {
            t[0]=t[1];
            t[1]=t[2];
        }
    }
    printf("%d", cnt);
}