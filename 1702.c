#include <stdio.h>
int main() {
    int a[3], i, J;
    for(i=0;i<3;i++) scanf("%d", &a[i]);
    for(J=0;J<=((a[1]+1)%2);J++) {
        for(i=0;i<3;i++) printf("%d", a[i]);
        printf(" ");
    }
}