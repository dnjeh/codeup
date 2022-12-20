#include <stdio.h>
int main() {
    int i, j, n, a[20][20] = {};
    for(i=0;i<19;i++)
        for(j=0;j<19;j++)
            scanf("%d", &a[i][j]);
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &a[20][0], &a[20][1]);
        for(j=0;j<19;j++) {
            if(a[a[20][0]-1][j]) a[a[20][0]-1][j] = 0;
            else a[a[20][0]-1][j] = 1;
        }
        for(j=0;j<19;j++) {
            if(a[j][a[20][1]-1]) a[j][a[20][1]-1] = 0;
            else a[j][a[20][1]-1] = 1;
        }
    }
    for(i=0;i<19;i++) {
        for(j=0;j<19;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
