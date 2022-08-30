#include <stdio.h>
int main() {
    int i, j, a, b;
    scanf("%d %d", &a, &b);
    for(i=a-1;i>=0;i--) {
        for(j=a*b-i;j>=a-i;j-=a) {
            printf("%d ", j);
        }
        printf("\n");
    }
}