#include <stdio.h>
int main() {
    int i, j, a, b, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;a*b>=t;i++) {
        for(j=i;(b-j)>=0&&j>=0;j--) {
            if(j>=a) {
                continue;
            }
            else {  
                c[j][(b-i+j)]=t++;
            }
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    sleep(1);
}