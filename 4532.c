#include <stdio.h>
int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i=1;i<=100;i*=10) {
        printf("%d\n", a*(b%(i*10)/i));
    }
    printf("%d", a*b);
}