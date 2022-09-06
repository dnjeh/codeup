#include <stdio.h>
int main() {
    int a, i, j, t=1;
    scanf("%d", &a);
    int b[a][a];
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            b[i][j]=0;
        }
    }
    for(i=0;i<a;i++) {
        for(j=i;j<a;j++) {
            if(i%2==0) {
                b[a-j+i-1][j]=t++;
            }
            else {
                b[j][a-j+i-1]=t++;
            }
        }
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}