#include <stdio.h>
int main() {
    int a, i, x=0, y=0, t=1;
    scanf("%d", &a);
    int b[a][a];
    for(i=0;i<a/2+a%2;i++) {
        for(x=0+i;x<a-i;x++) {
            b[y][x]=t++;
        }
        x--;
        t--;
        for(y=0+i;y<a-i;y++) {
            b[y][x]=t++;
        }
        y--;
        t--;
        for(x=a-i-1;x>=0+i;x--) {
            b[y][x]=t++;
        }
        x++;
        t--;
        for(y=a-i-1;y>=1+i;y--) {
            b[y][x]=t++;
        }
        y++;
    }
    for(x=0;x<a;x++) {
        for(y=0;y<a;y++) {
            printf("%d ", b[x][y]);
        }
        printf("\n");
    }
}