#include <stdio.h>
int a[7][7]={0,}, i, j, t, t1, count=0;
void cross(int y, int x) {
    int x1, y1;
    count++;
    if(count<=3) {
        for(i=0;i<7;i++) {
            if(a[y][i]==2&&i!=x) {
                cross(y, i);
            }
            else if(a[y][i]!=2){
                a[y][i]=1;
            }
        }
        for(i=0;i<7;i++) {
            if(a[i][x]==2&&i!=y) {
                cross(i, x);
            }
            else if(a[i][x]!=2) {
                a[i][x]=1;
            }
        }
    }
}
int main() {
    for(i=0;i<3;i++) {
        scanf("%d %d", &t, &t1);
        a[t-1][t1-1]=2;
    }
    for(i=0;i<7;i++) {
        if(a[3][i]) {
            cross(3, i);
        }
        else {
            a[3][i]=1;
        }
    }
    for(i=0;i<7;i++) {
        for(j=0;j<7;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}