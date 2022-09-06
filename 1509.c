#include <stdio.h>
int main() {
    int a[10][10], b[10], i, j;
    for (i = 0; i < 10; i++) { 
        for (j = 0; j < 10; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 10; i++) {
        if(b[i]==0) continue;
        else {
            for(j = 9; j >=0; j--) {
                if(a[j][i]==0&&j!=0) continue;
                else if(a[j][i]==0&&j==0) {
                    printf("%d safe", i+1);
                }
                else {
                    if(a[j][i]>0) {
                        printf("%d crash", i+1);
                        break;
                    }
                    else if(a[j][i]<0) {
                        printf("%d fall", i+1);
                        break;
                    }
                }
            }
            printf("\n");
        }
    }
}