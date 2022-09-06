#include <stdio.h>
int main() {
    int a, x=0, y=0, i, j, t=1;
    scanf("%d", &a);
    int b[a][a];
    x=a/2;
    for(t=1;t<=a*a;t++) {
        b[y][x]=t;
        if(t%a!=0) {
            if(y-1<0) y=a-1;
            else y--; 
            if(x+1<a) x++;
            else x=0;
        }
        else {
            y++;
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}