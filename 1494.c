#include <stdio.h>
int main() {
    int a, b, i, i1, sum, t1, t2, t3;
    scanf("%d %d", &a, &b);
    int c[a];
    for(i=0;i<a;i++) {
        c[i]=0;
    }
    for(i=0;i<b;i++) {
        t1=t2=t3=0;
        scanf("%d %d %d", &t1, &t2, &t3);
        c[t1-1]+=t3;
        c[t2]-=t3;
    }
    for(i=0;i<a;i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    for(i=0;i<a;i++) {
        sum=0;
        for(i1=0;i1<=i;i1++) {
            sum+=c[i1];
        }
        printf("%d ", sum);
    }
}