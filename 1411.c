#include <stdio.h>
int main() {
    int a, i, sum=0, t;
    scanf("%d", &a);
    for(i=1;i<=a;i++) {
        sum+=i;
    }
    for(i=0;i<a-1;i++) {
        scanf("%d", &t);
        sum-=t;
    }
    printf("%d", sum);
}