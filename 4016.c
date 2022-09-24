#include <stdio.h>
int main() {
    int a, b, c, i, t;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b) {
        t=a;
        a=b;
        b=t;
    }
    if(a<c) {
        t=a;
        a=c;
        c=t;
    }
    if(b<c) {
        t=b;
        b=c;
        c=t;
    }
    for(i=c;i>0;i--) {
        if(a%i==0&&b%i==0&&c%i==0) break;
    }
    printf("%d", i);
}