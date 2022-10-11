#include <stdio.h>
int main() {
    int a, b, i, t, max=0, min=0;
    scanf("%d %d", &a, &b);
    if(a<b) {
        t=a;
        a=b;
        b=t;
    }
    for(i=a;i>0;i--) {
        if(a%i==0&&b%i==0) break;
    }
    max=i;
    min=(a/max)*b;
    printf("%d\n%d", max, min);
}