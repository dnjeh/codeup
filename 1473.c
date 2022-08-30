#include <stdio.h>
int main() {
    int a, b, i, j, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=a-1;i>=0;i--) {
        if((a-i)%2==0) {
            for(j=b-1;j>=0;j--) {
                c[i][j]=t++;
            }
        }
        else {
            for(j=0;j<b;j++) {
                c[i][j]=t++;
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