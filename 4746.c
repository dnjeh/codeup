#include <stdio.h>
int main() {
    int a, b, c, c1;
    scanf("%d %d %d %d", &a, &b, &c, &c1);
    c+=c1;
    b+=c/60;
    c%=60;
    a+=b/60;
    b%=60;
    a%=24;
    printf("%d %d %d", a, b, c);
}