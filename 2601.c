#include <stdio.h>
int main() {
    int i, a[3]={1, 1, 2}, n;
    scanf("%d", &n);
    for(i=1;i<n;i++) {
        a[0]=a[1];
        a[1]=a[2];
        a[2]=a[0]+a[1];
    }
    printf("%d", a[0]);
}