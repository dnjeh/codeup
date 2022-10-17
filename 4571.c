#include <stdio.h>
int main() {
    int a, b, i, sum=0, fir=0;
    scanf("%d %d", &a, &b);
    for(i=1;(i*i)<=b;i++) {
        if(i*i>=a) {
            sum+=(i*i);
            if(!fir) {
                fir=i*i;
            }
        }
    }
    if(sum) {
        printf("%d\n%d", sum, fir);
    }
    else {
        printf("-1");
    }
}