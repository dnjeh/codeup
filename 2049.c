#include <stdio.h>
int a[4][4];
int fill() {
    int i, j, f=0;
    for(i=0;i<4;i++) {
        for(j=0;j<3;j++) {
            if(!a[j][i]&&a[j+1][i]) {
                a[j][i]=a[j+1][i];
                a[j+1][i]=0;
                f++;
            }
        }
    }
    if(f) fill();
}
int main() {
    int i, j;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    fill();
    for(i=0;i<4;i++) {
        for(j=0;j<3;j++) {
            if(a[j][i]==a[j+1][i]) {
                a[j][i]*=2;
                a[j+1][i]=0;
            }
        }
    }
    fill();
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}