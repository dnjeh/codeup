#include <stdio.h>
int thr(int a) {
    int i, cnt;
    for(cnt=0;a;a/=10) if(a%10&&!(a%10%3)) cnt++;
    for(i=0;i<cnt;i++) printf("K");
    return cnt;
}
int main() {
    int i, a, b;
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++) {
        if(!thr(i)) printf("%d", i);
        printf("\n");
    }
}