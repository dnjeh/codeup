#include <stdio.h>
int abs(int a) {
    if(a<0) return a*-1;
    else return a;
}
int main() {
    int a, i, j, x, y, t=1;
    scanf("%d", &a);
    int b[a][a];
    scanf("%d %d", &y, &x);
    x--; y--;
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            t=1;
            t+=abs(y-i);
            t+=abs(x-j);
            b[i][j]=t;
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}