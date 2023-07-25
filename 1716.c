#include <stdio.h>
int cal(int a, int b) {
    int ret=0;
    for(;a>1;a--) {
        if(a%2) ret+=30;
        else ret+=31;
    }
    return ret+b;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", cal(10, 30)-cal(a, b));
}