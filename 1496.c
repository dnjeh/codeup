#include <stdio.h>
int main() {
    int a, b, i, j, t[2];
    scanf("%d", &a);
    int c[a/2];
    for(i=0;i<a/2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &t[j]);
        }
        if(t[0]<t[1]) {
            c[i]=t[0];
        }
        else {
            c[i]=t[1];
        }
    }
    for(i=0;i<a/2;i++) {
        printf("%d ", c[i]);
    }
}