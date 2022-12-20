#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%.1f MB", a/8.0*b*c*d/1024.0/1024.0);
}
