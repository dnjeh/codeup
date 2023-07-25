#include <stdio.h>
int mem[110]={0, 1, 1};
int pibo(int t) {
    int ret=0;
    if(!t||mem[t]) ret=mem[t];
    else {
        ret=(pibo(t-1)+pibo(t-2))%1000000007;
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", pibo(n));
}