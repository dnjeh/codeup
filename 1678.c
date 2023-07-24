#include <stdio.h>
int main() {
    int a[5][5], b[3][3]={{0, }, }, i, j, di, dj, max;
    for(i=0;i<5;i++) for(j=0;j<5;j++) {
        scanf("%d", &a[i][j]);
        for(di=-2;di<=0;di++) for(dj=-2;dj<=0;dj++) {
            if(i+di>=0&&j+dj>=0&&i+di<3&&j+dj<3) b[i+di][j+dj]+=a[i][j];
        }
    }
    for(i=0;i<3;i++) for(j=0;j<3;j++) {
        if((!i&&!j)||max<b[i][j]) max=b[i][j];
    }
    printf("%d", max);
}