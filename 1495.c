#include <stdio.h>
int main() {
    int a, b, d, i, j, i1, j1, sum, t1, t2, t3, t4, t5;
    scanf("%d %d %d", &a, &b, &d);
    int c[a][b];
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            c[i][j]=0;
        }
    }
    for(i=0;i<d;i++) {
        t1=t2=t3=t4=t5=0;
        scanf("%d %d %d %d %d", &t1, &t2, &t3, &t5, &t5);
        c[t1][t2]+=t5;
        c[t3+1][t4+1]+=t5;
        c[t1][t4+1]-=t5;    
        c[t3+1][t2]-=t5;
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=a-1;i>=0;i--) {
        for(j=b-1;j>=0;j--) {
            sum=0;
            for(i1=0;i1<=i;i1++) {
                for(j1=0;j1<j;j1++) {
                    sum+=c[i1][j1];
                }
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}