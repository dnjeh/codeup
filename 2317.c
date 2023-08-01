#include <stdio.h>
int a[1000000]={4, 5, 2, 3, 1}, b[1000000], ind, cnt=0;
int main() {
    int n=5, m=3, i;
    for(i=0;i<n;i++) {
        if(a[i]<m) printf("%d ", a[i]);
        else if(a[i]>m) b[ind++]=a[i];
        else cnt++;
    }
    for(;cnt>0;cnt--) printf("%d ", m);
    for(i=0;i<ind;i++) printf("%d ", b[i]);
}