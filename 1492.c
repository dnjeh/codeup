#include <stdio.h>
int main() {
    int i, sum=0, a;
    scanf("%d", &a);
    int b[a];
    for(i=0;i<a;i++) {
        scanf("%d", &b[i]);
        sum+=b[i];
        b[i]=sum;
    }
    for(i=0;i<a;i++) {
        printf("%d ", b[i]);
    }
}