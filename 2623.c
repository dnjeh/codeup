#include <stdio.h>
int main() {
    int a, b, i, max;
    scanf("%d %d", &a, &b);
    if(a<b) {
        i=a;
        a=b;
        b=i;
    }
    for(i=1;i<=a;i++) {
        if(a%i==0&&b%i==0) {
            max=i;
        }
    }
    printf("%d", max);
}