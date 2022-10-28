#include <stdio.h>
int main() {
    int i, t=0, per, max=0, now=0;
    for(i=0;i<20;i++) {
        t++;
        scanf("%d", &per);
        if(t%2) {
            per*=-1;
        }
        now+=per;
        if(now>max) {
            max=now;
        }
    }
    printf("%d", max);
}