#include <stdio.h>
long long int pibonazi(long long int t, long long int t1, long long int cnt) {
    if(cnt) {
        return pibonazi(t1, t+t1, cnt-1);
    }
    else {
        return t;
    }
}
int main() {
    long long int a;
    scanf("%d", &a);
    printf("%d", pibonazi(1, 1, a-1));
}