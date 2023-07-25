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
    int a, b, i, max[2];
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++) {
        if(i==a||max[0]<dp(i)) {
            max[1]=i;
            max[0]=dp(i);
        }
    }
    printf("%d %d", max[1], max[0]);
}