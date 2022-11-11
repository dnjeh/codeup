#include <stdio.h>
int main() {
    int a[10], i, j, y;
    for(i=0;i<10;i++) {
        scanf("%d", &a[i]);
    }
    for(i=1;i<10;i++) {
        y=a[i];
        for(j=i-1;j>=0&&a[j]<y;j--) {
            a[j+1]=a[j];
        }
        a[j+1]=y;
    }
    printf("%d", a[2]);
}