#include <stdio.h>
int main() {
    int a, i, j;
    scanf("%d", &a);
    int b[a];
    for(i=0;i<a;i++) {
        scanf("%d", &b[i]);
    }
    for(i=0;i<2;i++) {
        for(j=0;j<a;j++) {
            printf("%d\n", b[j]);
        }
    }
}