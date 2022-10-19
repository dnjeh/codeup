#include <stdio.h>
int main() {
    int c[100][100], i, j, k, a, b, n, sum=0;
    for(i=0;i<100;i++) {
        for(j=0;j<100;j++) {
            c[i][j]=0;
        }
    }
    scanf("%d", &n);
    for(k=0;k<n;k++) {
        scanf("%d %d", &a, &b);
        a--;
        b--;
        for(i=b;i<b+10;i++) {
            for(j=a;j<a+10;j++) {
                c[i][j]=1;
            }
        }
    }
    for(i=0;i<100;i++) {
        for(j=0;j<100;j++) {
            sum+=c[i][j];
        }
    }
    printf("%d", sum);
}