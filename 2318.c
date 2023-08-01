#include <stdio.h>
int a[1000000], b[1000000], ind, cnt=0;
int main() {
    int n, m, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(i=0;i<n;i++) {
        if(a[i]<m) printf("%d ", a[i]);
        else if(a[i]>m) b[ind++]=a[i];
        else cnt++;
    }
    for(;cnt>0;cnt--) printf("%d ", m);
    for(i=0;i<ind;i++) printf("%d ", b[i]);
}