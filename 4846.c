#include <stdio.h>
int main() {
    int n, i, t[2], sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t[0], &t[1]);
        sum+=t[1]%t[0];
    }
    printf("%d", sum);
}