#include <stdio.h>
int main() {
    int i, a, b[10000];
    scanf("%d", &a);
    for(i=0;i<a;i++)
        scanf("%d", &b[i]);
    for(i--;i>=0;i--)
        printf("%d ", b[i]);
}
