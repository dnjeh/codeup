#include <stdio.h>
int main() {
    int a[10][10], i, j, k, t;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &t);
    int b[t][2];
    for(i=0;i<t;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(a[i][j]>0) {
                for(k=1;k<=a[i][j];k++) {
                    if(i-k>=0&&i-k<10) {
                        if(a[i-k][j]==0) {
                            a[i-k][j]=-2;
                        }
                        else if(a[i-k][j]==-1){
                            break;
                        }
                    }
                }
                for(k=1;k<=a[i][j];k++) {
                    if(i+k>=0&&i+k<10) {
                        if(a[i+k][j]==0) {
                            a[i+k][j]=-2;
                        }
                        else if(a[i+k][j]==-1){
                            break;
                        }
                    }
                }
                for(k=1;k<=a[i][j];k++) {
                    if(j-k>=0&&j-k<10) {
                        if(a[i][j-k]==0) {
                            a[i][j-k]=-2;
                        }
                        else if(a[i][j-k]==-1){
                            break;
                        }
                    }
                }
                for(k=1;k<=a[i][j];k++) {
                    if(j+k>=0&&j+k<10) {
                        if(a[i][j+k]==0) {
                            a[i][j+k]=-2;
                        }
                        else if(a[i][j+k]==-1){
                            break;
                        }
                    }
                }
                a[i][j]=-2;
            }
        }
    }
    for(i=0;i<t;i++) {
        if(!(a[(b[i][0]-1)][(b[i][1]-1)])) a[(b[i][0]-1)][(b[i][1]-1)]=i+1;
    }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Character Information\n");
    for(i=0;i<t;i++) {
        printf("player %d ", i+1);
        if(a[(b[i][0]-1)][(b[i][1]-1)]>0) printf("survive");
        else printf("dead");
        printf("\n");
    }
}