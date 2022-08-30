#include <stdio.h>
int main() {
    int i, j, a;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        for(j=i+1;j<=a*(a-1)+i+1;j+=a) {
            printf("%d ", j);
        }
        printf("\n");
    }
}   