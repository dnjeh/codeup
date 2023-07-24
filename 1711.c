#include <stdio.h>
int main() {
    int a[3][2];
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if(a[0][0]<=a[2][0]&&a[0][1]<=a[2][1]&&a[1][0]>=a[2][0]&&a[1][1]>=a[2][1]) printf("충돌");
    else printf("비충돌");
}