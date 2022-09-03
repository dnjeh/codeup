#include <stdio.h>
int main() {
    int a, b, i, j, t, d;
    scanf("%d %d", &a, &b);
    if(a%b!=0) d=a/b+1;
    else d=a/b;
    int c[d];
    for(i=0;i<d;i++) {
        c[i]=-1001;
        t=0;
        for(j=0;j<b;j++) {
            if(i+1==d&&j==a%b&&a%b!=0) break;
            scanf("%d", &t);
            if(c[i]<t) c[i]=t;
        }
    }
    for(i=0;i<d;i++) {
        printf("%d ", c[i]);
    }
}