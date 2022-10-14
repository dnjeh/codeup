#include <stdio.h>
int main() {
    int i, j, a[10], pung=0, chaebin=0, chaebinc=1, t;
    for(i=0;i<10;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++) {
        t=0;
        for(j=0;j<10;j++) {
            if(a[i]==a[j]) {
                t++;
            }
        }
        if(chaebinc<t) {
            chaebinc=t;
            chaebin=i;
        }
    }
    for(i=0;i<10;i++) {
        pung+=a[i];
    }
    pung/=10;
    printf("%d\n%d", pung, a[chaebin]);
}