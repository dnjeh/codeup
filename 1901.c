#include <stdio.h>
int a;
void wornl(int b) {
    printf("%d\n", a-b+1);
    if(b!=1) wornl(b-1);
}
int main() {
    scanf("%d", &a);
    wornl(a);
}