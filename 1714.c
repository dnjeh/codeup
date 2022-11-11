#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(!a) printf("0");
    while(a) {
        printf("%d", a%10);
        a/=10;
    }
}