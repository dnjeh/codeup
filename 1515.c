#include <stdio.h>
int main() {
    int a[25][25], b[25][25], i, j, i1, j1, sum;
    for(i=0;i<25;i++) {
        for(j=0;j<25;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<25;i++) {
        for(j=0;j<25;j++, sum=0) {
            for(sum=0, i1=i-1;i1<=i+1;i1++) {
                for(j1=j-1;j1<=j+1;j1++) {
                    if(j1>=0&&i1>=0&&j1<25&&i1<25&&(i1!=i||j1!=j)) sum+=a[i1][j1];
                }
            }
            if((a[i][j]&&(sum==2||sum==3))||(a[i][j]==0&&sum==3)) {
                b[i][j]=1;
            }
            else {
                b[i][j]=0;
            }
        }
    }
    for(i=0;i<25;i++) {
        for(j=0;j<25;j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}