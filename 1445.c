#include <stdio.h>
int main() {
    int n, m, i, a1=0, b1=0;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n+m];
    for(i=0;i<n+m;i++) {
        c[i]=0;
    }
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    for(i=0;i<n+m;i++) {
        if(a[a1]<b[b1]) {
            c[i]=a[a1];
            a1++;
        }
        else if(a[a1]>b[b1]) {
            c[i]=b[b1];
            b1++;
        }
        else {
            if(a1+1==n) {
                c[i]=b[b1];
                b1++;
            }
            else {
                c[i]=a[a1];
                a1++;
            }
        }
    }
    for(i=0;i<n+m;i++) {
        printf("%d ", c[i]);
    }
}