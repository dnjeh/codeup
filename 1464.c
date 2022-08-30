#include <stdio.h>
int main() {
    int i, j, a, b;
    scanf("%d %d", &a, &b);
    for(i=a;i>0;i-- ) {
        for(j=i*b;j>=b*(i-1)+1;j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}   