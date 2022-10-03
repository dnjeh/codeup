#include <stdio.h>

void snowball(int a) {
    printf("%d\n", a);
    if(a!=1) {
        if(a%2) {
            a=a*3+1;
        }
        else {
            a/=2;
        }
        snowball(a);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    snowball(a);
}