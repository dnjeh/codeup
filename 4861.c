#include <stdio.h>
int main() {
    int n, k, i, a[2][6]={{0, }, }, s, y, cnt=0;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d %d", &s, &y);
        if(!a[s][y]||a[s][y]>=k) {
            cnt++;
            a[s][y]=1;
        }
        else a[s][y]++;
    }
    printf("%d", cnt);
}