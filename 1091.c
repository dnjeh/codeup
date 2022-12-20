#include <stdio.h>
int main() {
    long long int i, a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    for(i=1;i<d;i++) {
        a*=b;
        a+=c;
    }
    printf("%lld", a);
}
