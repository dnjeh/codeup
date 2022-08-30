#include <stdio.h>
int main() {
    int i, j, a;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        for(j=a*(i+1);j>=1+a*i;j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}   