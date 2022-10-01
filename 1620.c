#include <stdio.h>
#include <math.h>
int summ(int a) {
    int sum=0;
    for(;a/10!=0;a/=10) {
        sum+=(a%10);
    }
    sum+=(a%10);
    if((sum/10)==0) return sum;
    else return summ(sum);
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", summ(a));
}