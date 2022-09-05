#include <stdio.h>
int main() {
    int a[101][101]={0}, x1, x2, y1, y2, i, j, k, sum=0;
    for(i=0;i<4;i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for(k=x1;k<x2;k++) {
            for(j=y1;j<y2;j++) {
                a[j][k]=1;
            }
        }
    }
    for(i=0;i<=100;i++) {
        for(j=0;j<=100;j++) {
            if(a[i][j]==1) sum++;
        }
    }
    printf("%d", sum);
}