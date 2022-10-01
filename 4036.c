#include <stdio.h>
int main() {
    int plus, minus, a, b;
    scanf("%d%d", &plus, &minus);
    a=b=plus/2;
    a+=minus/2;
    b-=minus/2;
    if(minus%2) {
        a++;
    }
    printf("%d\n%d", a, b);
}