#include <stdio.h>
int main() {
    long long int a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a+b+c);
    printf("%.1f", (a+b+c)/3.0);
}