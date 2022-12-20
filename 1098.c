#include <stdio.h>
int main() {
    int b, c, i, j, n, m, o, x, y;
    scanf("%d %d", &b, &c);
    int a[b][c];
    for(n=0;n<b;n++)
        for(m=0;m<c;m++)
            a[n][m] = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d %d %d",&m, &o, &y, &x);
        if(o) {
            for(j=0;j<m;j++) {
                a[j+y-1][x-1] = 1;
            }
        }
        else {
            for(j=0;j<m;j++) {
                a[y-1][j+x-1] = 1;
            }
        }
    }
    for(i=0;i<b;i++) {
        for(j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
