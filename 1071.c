#include <stdio.h>
int main() {
    int a;
    doo:
        scanf("%d", &a);
        if(a!=0) {
            printf("%d\n", a);
            goto doo;
        }
}
