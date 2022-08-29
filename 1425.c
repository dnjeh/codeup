#include <stdio.h>
int main() {
    int a, b, i, j, t;
    scanf("%d %d", &a, &b);
    int c[a];
    for(i=0;i<a;i++) {
        scanf("%d", &c[i]);
    }
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            if(c[j]>c[i]) {
                t=c[j];
                c[j]=c[i];
                c[i]=t;
            }
        }
    }
    t=0;
    for(i=0;i<=a/b;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[t]);
            t++;
            if(t==a) {
                return 0;
            }
        }
        printf("\n");
    }
}