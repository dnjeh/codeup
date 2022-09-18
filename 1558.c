#include <stdio.h>
#include <math.h>

long long int n;
long long int f(long long int n) {
    long long int m=0LL, sum=1LL, i, j;
    for(i=1LL;(n/sum)!=0LL&&i<=19;i++) {
        sum*=10LL;
    }
    i--;
    for(j=i;j>0LL;j--) {
        m+=((n/(long long int)(pow(10LL, (i-j))))%10LL)*(long long int)(pow(10LL, j-1));
    } 
    return (long long int)m;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
