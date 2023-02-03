#include <stdio.h>
int main() {
    int a[2], k;
    scanf("%d %d %d", a, &a[1], &k);
    a[1]-=a[0];
    for(;*a<=k;*a+=a[1]) printf("%d ", *a);
}