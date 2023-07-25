#include <stdio.h>
int gcd(int a, int b) {
    int t;
    if(a<b) {
        t=a;
        a=b;
        b=t;
    }
    if(!(a%b)) return b;
    else return gcd(b, a%b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a/gcd(a, b), b/gcd(a, b));
}