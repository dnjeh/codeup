#include <stdio.h>
#include <math.h>
int summ(int a) {
    int i, j, sum=0;
    for(i=0;((a/(int)(pow(10, i)))!=0);i++) {};
    i--;
    for(;i>=0;i--) {
        sum+=((int)(a/((int)(pow(10, i)))))%10;
        printf("%d %d\n", sum, ((int)(a/((int)(pow(10, i))))));
    }
    if((sum/10)==0) return sum;
    else return summ(sum);
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", summ(a));
    sleep(5);
}