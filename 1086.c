#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f MB", c/8.0*b*a/1024.0/1024.0);
}
