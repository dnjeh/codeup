#include <stdio.h>
int main() {
    int a, b, c;
    char e, f;
    scanf("%d%c%d%c%d", &a, &e, &b, &f, &c);
    printf("%04d.%02d.%02d", a, b, c);
}
