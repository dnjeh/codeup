#include <stdio.h>
int main() {
    int n, i, j, key;
    scanf("%d", &n);
    int a[n][3];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (i=1;i<n;i++) {
        key=a[i];
        for(j=i-1;j>=1&&a[j]>key;j--) {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }

    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}