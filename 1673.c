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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", gcd(gcd(a, b), c));
}