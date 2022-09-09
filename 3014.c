#include <stdio.h>
int a[100001];
int main() {
    int i, n, t, j;
    for(i=0;i<=100000;i++) {
        a[i]=0;
    }
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=0;i<=100000;i++) {
        for(j=0;j<a[i];j++) {
            printf("%d ", i);
        }
    }
}