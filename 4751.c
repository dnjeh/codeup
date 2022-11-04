#include <stdio.h>
int main() {
    int a, i, j, key[3];
    scanf("%d", &a);
    int b[a][3];
    for(i=0;i<a;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=1;i<a;i++) {
        key[0]=b[i][0];
        key[1]=b[i][1];
        key[2]=b[i][2];
        for(j=i-1;j>=0&&b[j][2]<key[2];j--) {
            b[j+1][2]=b[j][2];
            b[j+1][1]=b[j][1];
            b[j+1][0]=b[j][0];
        }
        b[j+1][0]=key[0];
        b[j+1][1]=key[1];
        b[j+1][2]=key[2];
    }
    printf("%d %d\n", b[0][0], b[0][1]);
    printf("%d %d\n", b[1][0], b[1][1]);
    for(i=2;;i++) {
        if(b[0][0]!=b[i][0]) {
            printf("%d %d", b[i][0], b[i][1]);
            return 0;
        }
    }
}