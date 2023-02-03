#include <stdio.h>
int main() {
    int T, t, i, a, cnt=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        cnt=0;
        scanf("%d", &t);
        a=t%10;
        for(t/=10;t;t/=10) {
            if(a==2&&t%10==6) cnt++;
            a=t%10;
        }
        printf("%d\n", cnt);
    }
}