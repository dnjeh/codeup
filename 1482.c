#include <stdio.h>
int main() {
    int i, j, a, b, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;a*b>=t;i++) {
        for(j=i;a-i+j-1>=0&&j>=0;j--) {
            if(j>=b) {
                continue;
            }
            else {
                c[a-i+j-1][j]=t++;
            }
        }
    }

    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}