#include <stdio.h>
int main() {
    long long int r, x1, x2, y1, y2, t;
    scanf("%lld %lld %lld %lld %lld", &x1, &y1, &r, &x2, &y2);
    r*=r;
    t=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    if(r==t) printf("on");
    else if(r<t) printf("out");
    else printf("in");
}