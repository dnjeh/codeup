#include <stdio.h>
int main() {
    int i, j, n, a[20][20] = {};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &a[0][0], &a[0][1]);
        a[a[0][0]][a[0][1]] = 1;
    }
    for(i=1;i<20;i++) {
        for(j=1;j<20;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
