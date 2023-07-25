#include <stdio.h>
int chk(int t) {
    int cnt=0;
    for(;t;t/=10) if(t%10==1) cnt++;
    return cnt;
}
int main() {
    int a, b, i, cnt=0;
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++) {
        cnt+=chk(i);
    }
    printf("%d", cnt);
}