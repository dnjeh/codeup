#include <stdio.h>
int mem[1000000]={0, 1};
int dp(long long int t) {
    int ret;
    if(t<1000000&&mem[t]) ret=mem[t];
    else {
        if(t%2) ret=dp(t*3+1)+1;
        else ret=dp(t/2)+1;
        if(t<1000000) mem[t]=ret;
    }
    return ret;
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", dp(a));
}