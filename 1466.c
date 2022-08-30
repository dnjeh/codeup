#include <stdio.h>
int main() {
    int i, j, a, b;
    scanf("%d %d", &a, &b);
    for(i=0;i<a;i++) {
        for(j=a*b-i;j>=a-i;j-=a) {
            printf("%d ", j);
        }
        printf("\n");
    }
}