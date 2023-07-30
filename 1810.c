#include <stdio.h>
int main() {
    int n, b;
    char a[100], *s;
    scanf("%s", a);
    scanf("%d %d", &n, &b);
    s=&a[n-1];
    a[b]=0;
    printf("%s", s);
}