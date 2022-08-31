#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, i, j, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=b-1;i>=0;i--) {
        if((b-i)%2==1) { 
            for(j=a-1;j>=0;j--) {
                c[j][i]=t++;
            }
        }
        else {
            for(j=0;j<a;j++) {
                c[j][i]=t++;
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