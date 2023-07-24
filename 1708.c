#include <stdio.h>
int a[2000], b[101], c[101];
int main() {
    int i, n, lev, cnt=1;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }  
    for(i=100;i>=0;i--) {
        if(b[i]) {
            lev=cnt;
            c[i]=lev;
            for(;b[i];cnt++) b[i]--;
        }
    }
    for(i=0;i<n;i++) {
        printf("%d %d\n", a[i], c[a[i]]);
    }
}