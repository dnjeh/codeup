#include <stdio.h>
int c[500001];
int main() {
    int n, i, j, temp, key;
    scanf("%d", &n);
    int a[n], b[n];
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    for (i=1;i<n;i++) {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--) {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    for (i=0; i<n; i++) {
        c[a[i]]=i;
    }
    for (i=0; i<n; i++)
        printf("%d ", c[b[i]]);
    return 0;
}