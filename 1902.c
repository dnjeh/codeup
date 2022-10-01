#include <stdio.h>
void wornl(int b) {
    printf("%d\n",b);
    if(b!=1) wornl(b-1);
}
int main() {
    int a;
    scanf("%d", &a);
    wornl(a);
}