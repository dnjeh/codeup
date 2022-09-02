#include <stdio.h>
int main() {
    int a, b, d, i, j, i1, j1, sum, t[5];
    scanf("%d %d %d", &a, &b, &d);
    int c[a][b];
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            c[i][j]=0;
        }
    }
    for(i=0;i<d;i++) {
        for(j=0;j<5;j++) {
            t[j]=0;
        }
        for(j=0;j<5;j++) {
            scanf("%d", &t[j]);
        }
        c[t[0]][t[1]]+=t[4];
        c[t[2]+1][t[3]+1]+=t[4];
        c[t[0]][t[3]+1]-=t[4];
        c[t[2]+1][t[1]]-=t[4];
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            sum=0;
            for(i1=0;i1<=i;i1++) {
                for(j1=0;j1<=j;j1++) {
                    sum+=c[i1][j1];
                }
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}