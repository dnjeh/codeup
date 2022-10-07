#include <stdio.h>
int cx, cy;
void paskal(int x, int y, int a[][cx]) {
    if(x==0) {
        a[y][x]=1;
    }
    else if(y==0) {
        a[y][x]=1;
    }
    else {
        a[y][x]=a[y-1][x]%100000000+a[y][x-1]%100000000;
    }

    if(cy==y+1&&cx==x+1) {
        printf("%d", a[cy-1][cx-1]%100000000);
    }
    else if(cx==x+1) {
        paskal(0, y+1, a);
    }
    else {
        paskal(x+1, y, a);
    }
}
int main() {
    scanf("%d %d", &cx, &cy);
    int a[cy][cx];  
    paskal(0, 0, a);
}