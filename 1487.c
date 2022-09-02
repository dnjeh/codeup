#include <stdio.h>
int main() {
    int a, b, i, j, face=1; 
    scanf("%d %d", &a, &b);
    int c[a][b];
    int x=b-1, y=0, t=a*b;
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            c[i][j]=0;
        }
    }
    for(i=0;t>=1;i++) {
        c[y][x]=t--;
        switch(face%4) {
            case 0:
                if(x+1==b||c[y][x+1]!=0) {
                    face++;
                    y++;
                } 
                else {
                    x++;
                }
                break;
            case 1:
                if(y+1==a||c[y+1][x]!=0) {
                    face++;
                    x--;
                }
                else {
                    y++;
                }
                break;
            case 2:
                if(x-1<0||c[y][x-1]!=0) {
                    face++;
                    y--;
                }
                else {
                    x--;
                }
                break;
            case 3:
                if(y-1<0||c[y-1][x]!=0) {
                    face++;
                    x++;
                }
                else {
                    y--;
                }
                break;
            default:
                printf("안 일어날 상황!");
                break;
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}