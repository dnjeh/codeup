#include <stdio.h>
int main() {
    int i, j, n, m[2], t, tsum;
    scanf("%d %d %d", &n, &m[0], &m[1]);
    int a[2][n];
    for(i=0;i<n;i++) {
        a[0][i]=a[1][i]=0;
    }
    for(i=0;i<2;i++) {
        for(j=0;j<m[i];j++) {
            scanf("%d", &t);
            a[i][t-1]=1;
        }
    }
    for(i=0;i<2;i++) {
        tsum=0;
        for(j=0;j<n;j++) {
            if(a[0][j]==i&&a[1][j]==i) {
                tsum++;
            }
        }
        printf("%d ", tsum);
    }
}