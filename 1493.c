#include <stdio.h>
int main() {
    int i, j, i1, j1, sum=0, a, b;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            scanf("%d", &c[i][j]);
        }
    }
    for(i=a-1;i>=0;i--) {
        for(j=b-1;j>=0;j--) {
            sum=0;
            for(i1=0;i1<=i;i1++) {
                for(j1=0;j1<=j;j1++) {
                    sum+=c[i1][j1];
                }
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}