#include <stdio.h>
int main() {
    int a, i, j, t=1, sum=0;
    scanf("%d", &a);
    int b[a][a];
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            sum+=b[i][j]=t++;
        }
    }
    for(i=1;i<a-1;i++) {
        for(j=1;j<a-1;j++) {
            sum-=b[i][j];
        }
    }
    printf("%d", sum);
}