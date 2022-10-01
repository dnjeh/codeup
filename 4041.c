#include <stdio.h>
#include <math.h>
int main() {
    int a, i, j, q=0, sum=0;
    scanf("%d", &a);
    for(i=0;a/(int)pow(10, i);i++) {} i--;
    for(j=0;j<=i;j++) {
        q+=((a/(int)pow(10, j))%10)*(int)pow(10, i-j);
    }
    printf("%d\n", q);
    for(j=0;j<=i;j++) {
        sum+=(q/(int)pow(10, j))%10;
    }
    printf("%d", sum);
}