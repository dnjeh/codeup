#include <stdio.h>
int main() {
    long long int n, a, b, c;
    scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
    printf("%lld", (((n/12*a)/8*b)/5*c));
}