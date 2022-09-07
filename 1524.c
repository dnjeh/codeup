#include <stdio.h>
int main() {
    int a[9][9], i, j, x, y, sum=0;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &y, &x);
    for(i=y-2;i<=y;i++) {
        for(j=x-2;j<=x;j++) {
            if(i>=0&&j>=0&&i<9&&j<9&&((i-1)!=y||(j-1)!=x)) sum+=a[i][j];
        }
    }
    if(a[y-1][x-1]) printf("-1");
    else printf("%d", sum);
}