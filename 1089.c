#include <stdio.h>
int main() {
    int i, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(i=1;i<c;i++)
        a+=b;
    printf("%d", a);
}
