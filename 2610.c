#include <stdio.h>
int main() {
    int a[10][10], i, j, x, y;
    char t;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            scanf("%c", &t);
            if(t=='_') {
                a[i][j]=0;
            }
            else if(t=='*') {
                a[i][j]=1;
            }
            else {
                j--;
            }
        }
    }
    scanf("%d %d", &x, &y);
    while(1) {
        a[y][x]=2;
        if(x-1>=0&&a[y][x-1]==0) {
            x--;
        }  
        else {
            
        }
    }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(a[i][j]) {
                printf("*");
            }
            else {
                printf("_");
            }
        }
        printf("\n");
    }
}