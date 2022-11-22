#include <stdio.h>
int main() {
    int t=0, a, b, i, j;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            scanf("%d", &c[i][j]);
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}