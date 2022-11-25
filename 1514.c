#include <stdio.h>
int a[7][7]={0,}, i, j, t, t1, count=0;
void cross(int y, int x) {
    a[y][x]=3;
    for(i=0;i<7;i++) {
        if(a[y][i]==0){
            a[y][i]=1;
        }
        else if(a[y][i]==2) {
            cross(y, i);
        }
    }
    for(i=0;i<7;i++) {
        if(a[i][x]==0) {
            a[i][x]=1;
        }
        else if(a[i][x]==2) {
            cross(i, x);
        }
    }
}
int main() {
    for(i=0;i<3;i++) {
        scanf("%d %d", &t, &t1);
        a[t-1][t1-1]=2;
    }
    for(i=0;i<7;i++) {
        if(a[3][i]==0) {
            a[3][i]=1;
        }
        else if(a[3][i]==2) {
            cross(3, i);
        }
    }
    for(i=0;i<7;i++) {
        for(j=0;j<7;j++) {
            printf("%d ", a[i][j]==3?2:a[i][j]);
        }
        printf("\n");
    }
}