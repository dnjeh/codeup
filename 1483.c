#include <stdio.h>
int main() {
    int i, j, a, b, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=a-1;a*b>=t;i--) {
        for(j=i;j-i<b&&j<a;j++) {
            if(j<0) {
                continue;
            }
            else {
                c[j][j-i]=t++;
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