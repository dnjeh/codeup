#include <stdio.h>
int main() {
    int a, b, i, j, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;a*b!=t;i++) {
        for(j=i;j>=0;j--) {
            if(j>=b||(i-j)>=a) {
                continue;
            }   
            else if(j<b&&(i-j)<a) {
                c[(i-j)][j]=t++;
            }
            if(a*b==t) {
                break;
            }
        }  
    }
    c[a-1][b-1]=a*b;
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}