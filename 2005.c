#include <stdio.h>
int n, m;
int ing(int t, int tt) {
    if((t-tt)%m) return 0;
    else return 1;
}
int main() {
    int i, j;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(ing(a[i], a[j])) {
                printf("no");
                return 0;
            }
        }
    }
    printf("yes");
}