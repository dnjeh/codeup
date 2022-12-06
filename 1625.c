#include <stdio.h>
int main() {
    int T, i, t, sum[2]={0};
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &sum[0]);
        for(;sum[0]/10;sum[0]=sum[1]) {
            sum[1]=0;
            for(;sum[0];sum[0]/=10) {
                sum[1]+=sum[0]%10;
            }
        }
        printf("%d\n", sum[0]);
    }
}