#include <stdio.h>
int main() {
    int a, b, i, j, sum=0, n;
    scanf("%d %d", &n, &a);
    for(j=0;j<n;j++) {
        sum=0;
        scanf("%d", &b);
        for(i=1;i<=a;i++) {
            if(!(b%i)||!(i%b)) {
                sum++;
            }
        }
        printf("%d\n", sum);
    }
}