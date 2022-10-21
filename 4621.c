#include <stdio.h>
int main() {
    int i, n, m, t=0;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++) {
        if(n%i==0) {
            t++;
            if(t==m) {
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("0");
}