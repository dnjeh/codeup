#include <stdio.h>
int main() {
    int t, t1, t2, i, j, i1, j1, a, b, max=0;
    scanf("%d %d %d %d", &t1, &t2, &a, &b);
    int c[t2][t1];
    for(i=0;i<t2;i++) {
        for(j=0;j<t1;j++) {
            scanf("%d", &c[i][j]);
        }
    }
    for(i=0;i<t2;i++) {
        for(j=0;j<t1;j++) {
            for(i1=i, t=0;i1<i+b;i1++) {
                for(j1=j;j1<j+a;j1++) {
                    if(i1<t2&&j1<t1) {
                        t+=c[i1][j1];
                    }
                }
            }
            if(max<t) max=t;
        }
    }
    printf("%d", max);
}