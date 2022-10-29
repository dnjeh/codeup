#include <stdio.h>
int main() {
    int a[3][4]={{0,0,0,0}, {0,0,0,0}, {0,0,0,0}}, n, i, j, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &t);
            a[j][0]+=t;
            a[j][t]++;
        }
    }
    if(a[0][0]>a[1][0]&&a[0][0]>a[2][0]) {
        printf("1 %d", a[0][0]);
    }
    else if(a[1][0]>a[2][0]&&a[1][0]>a[0][0]) {
        printf("2 %d", a[1][0]);
    }
    else if(a[2][0]>a[1][0]&&a[2][0]>a[0][0]) {
        printf("3 %d", a[2][0]);
    }
    else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]) {
        if(a[0][3]>a[1][3]&&a[0][3]>a[2][3]) {
            printf("1 %d", a[0][0]);
        }
        else if(a[1][3]>a[2][3]&&a[1][3]>a[0][3]) {
            printf("2 %d", a[1][0]);
        }
        else if(a[2][3]>a[1][3]&&a[2][3]>a[0][3]) {
            printf("3 %d", a[2][0]);
        }
        else {
            printf("0 %d", a[0][0]);
        }
    }
    else if(a[0][0]==a[1][0]) {
        if(a[0][3]>a[1][3]) {
            printf("1 %d", a[0][0]);
        }
        else if(a[0][3]<a[1][3]) {
            printf("2 %d", a[1][0]);
        }
        else {
            if(a[0][2]>a[1][2]) {
                printf("1 %d", a[0][0]);
            }
            else if(a[0][2]<a[1][2]) {
                printf("2 %d", a[1][0]);
            }   
            else {
                printf("0 %d", a[1][0]);
            }
        }
    }
    else if(a[0][0]==a[2][0]) {
        if(a[0][3]>a[2][3]) {
            printf("1 %d", a[0][0]);
        }
        else if(a[0][3]<a[2][3]) {
            printf("3 %d", a[2][0]);
        }
        else {
            if(a[0][2]>a[2][2]) {
                printf("1 %d", a[0][0]);
            }
            else if(a[0][2]<a[2][2]) {
                printf("3 %d", a[2][0]);
            }   
            else {
                printf("0 %d", a[1][0]);
            }
        }
    }
    else if(a[1][0]==a[2][0]) {
        if(a[1][3]>a[2][3]) {
            printf("2 %d", a[1][0]);
        }
        else if(a[1][3]<a[2][3]) {
            printf("3 %d", a[2][0]);
        }
        else {
            if(a[1][2]>a[2][2]) {
                printf("2 %d", a[1][0]);
            }
            else if(a[1][2]<a[2][2]) {
                printf("3 %d", a[2][0]);
            }   
            else {
                printf("0 %d", a[1][0]);
            }
        }
    }
}