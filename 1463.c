#include <stdio.h>
int main() {
    int i, j, a;
    scanf("%d", &a);
    for(i=a;i>0;i--) {
        for(j=i;j<=a*(a-1)+i;j+=a) {
            printf("%d ", j);
        }
        printf("\n");
    }
}