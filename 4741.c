#include <stdio.h>
int main() {
    int a, b, b1;
    scanf("%d %d %d", &a, &b, &b1);
    b+=b1;
    a+=b/60;
    b%=60;
    a%=24;
    printf("%d %d", a, b);
}