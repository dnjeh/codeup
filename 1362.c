#include <stdio.h>
int main() {
    int a, i, j, sum=0;
    scanf("%d", &a);
    for(i=1;i<=a;i++) {
        sum+=i;
    }
    for(i=0;i<a;i++) {
        for(j=0;j<=i;j++) {
            printf("%d ", sum--);
        }
        printf("\n");
    }
}