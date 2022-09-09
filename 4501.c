#include <stdio.h>
int main() {
    int a[7], i, j, max[2]={0, 0}, t;
    for(i=0;i<7;i++) {
        scanf("%d", &a[i]);
    }
    for(j=0;j<2;j++) {
        for(i=0;i<7;i++) {
            if(max[j]<a[i]) {
                max[j]=a[i];
                t=i;
            }
        }
        a[t]=0;
    }
    for(i=0;i<2;i++) {
        printf("%d\n", max[i]);
    }
}