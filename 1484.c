#include <stdio.h>
int main() {
    int x, y, i, j, a, b, t=1;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            c[i][j]=0;
        }
    }
    while(t<a*b) {
        c[y][x]=t++;
        if(x+1<=b) {
            if(c[y][x+1]==0) {
                x++;
            }
            else if(y+1<=a) {
                if()
            }
        }
    }
}