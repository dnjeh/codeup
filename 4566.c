#include <stdio.h>
int main() {
    int a, b, i, j, t, sum=0, fir;
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++) {
        t=0;
        for(j=2;j<i;j++) {
            if(i%j==0) {
                t++;
            }
        }
        if(!t&&i!=1) {
            if(sum==0) fir=i;
            sum+=i;
        }
    }
    printf("%d\n%d", sum, fir);
}