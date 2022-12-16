#include <stdio.h>
long long int digetsum(long long int t) {
    if(t) {
        return t%10+digetsum(t/10);
    }
    else {
        return 0;
    }
}
int main() {
    long long int a;
    scanf("%lld", &a);
    printf("%lld", digetsum(a));
}