#include <stdio.h>
int main() {
    int a, b, i, t=0, max=-10000000;
    scanf("%d %d", &a, &b);
    int c[a];
    for(i=0;i<a;i++) {
        scanf("%d", &c[i]);
    }
    for(i=0;i<a;i++) {
        t+=c[i];
        if(i>=b-1) {
            if(i>=b) {
                t-=c[i-b];
            }
            if(t>max) {
                max=t;
            }
        }
    }
    printf("%d", max);
}