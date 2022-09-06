#include <stdio.h>
int main() {
    int i, j, a;
    scanf("%d", &a);
    int b[a][a];
    for(i=0;i<a;i++) {
        scanf("%d", &b[i][0]);
    }
    for(i=0;i<a;i++) { 
        for(j=0;j<=i;j++) {
            printf("%d ", b[i][j]);
            if(i!=0) {
                b[i][j+1]=b[i][j]-b[i-1][j];
            }
        }
        printf("\n");
    }
}