#include <stdio.h>
int main() {
    int i, j, a, t=0;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            t++;
            printf("%d ", t);
        }
        printf("\n");
    }
}