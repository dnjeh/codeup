#include <stdio.h>
int main() {
    int a, i, j, t=1;
    scanf("%d", &a);
    int b[a][a];
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            b[j][i]=t++;
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}