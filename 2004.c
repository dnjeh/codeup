#include <stdio.h>
int main() {
    int r, c, n, m, i, j, k, l, f;
    scanf("%d %d %d %d", &r, &c, &n, &m);
    for(i=0;i<r;i++) {
        for(l=0;l<n;l++) {
            f=i%2;
            for(j=0;j<c;j++) {
                f++;
                for(k=0;k<m;k++) printf("%c", f%2?'X':'.');
            }
            printf("\n");
        }
    }
}