#include <stdio.h>
int main() {
    int i, a, b[23] = {}, c;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        scanf("%d", &c);
        b[c-1]++;
    }
    for(i=0;i<23;i++)
        printf("%d ", b[i]);
}
