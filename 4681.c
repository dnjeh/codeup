#include <stdio.h>
int main() {
    int t, sum=0, i;
    for(i=0;i<5;i++) {
        scanf("%d", &t);
        sum+=(t*t);
    }
    printf("%d", sum%10);
}