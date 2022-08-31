#include <stdio.h>
int main() {
    int i, j, a, b, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=b-1;a*b>=t;i--) {
        for(j=i;j<b&&(j-i)<a;j++) {
            if(j<0) {
                continue;
            }
            else {
                c[(j-i)][j]=t++;
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