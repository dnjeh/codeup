#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &b);
    ddd:
        scanf("%d", &a);
        if(b--!=0) {
            printf("%d\n", a);
            goto ddd;
        }
}
