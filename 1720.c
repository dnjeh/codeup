#include <stdio.h>
int min(int a, int b) { return a>b?b:a; }
int main() {
    int n, a[3], b, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) scanf("%d", &a[j]);
        scanf("%d", &b);
        if(min(min(a[0], a[1]), a[2])!=b) {
            printf("%d %d", i+1, min(min(a[0], a[1]), a[2]));
            return 0;
        }
    }
    printf("-1");
}