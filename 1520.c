#include <stdio.h>
int main() {
    int t=0, t1, t2, u, i, j, i1, j1, sum, x, y, z;
    scanf("%d %d", &t1, &t2);
    scanf("%d %d %d", &x, &y, &z);
    int a[2][t1][t2];
    for(i=0;i<t1;i++) {
        for(j=0;j<t2;j++) {
            scanf("%d", &a[t%2][i][j]);
        }
    }
    scanf("%d", &u);
    for(t=0;t<u;t++) {
        for(i=0;i<t1;i++) {
            for(j=0;j<t2;j++) {
                for(sum=0, i1=i-1;i1<=i+1;i1++) {
                    for(j1=j-1;j1<=j+1;j1++) {
                        if(j1>=0&&i1>=0&&j1<t2&&i1<t1&&(i1!=i||j1!=j)) sum+=a[t%2][i1][j1];
                    }
                }
                if((a[t%2][i][j]&&(sum>=y&&sum<z))||(a[t%2][i][j]==0&&sum==x)) {
                    a[(t+1)%2][i][j]=1;
                }
                else {
                    a[(t+1)%2][i][j]=0;
                }
            }
        }
    }
    for(i=0;i<t1;i++) {
        for(j=0;j<t2;j++) {
            printf("%d ", a[t%2][i][j]);
        }
        printf("\n");
    }
}