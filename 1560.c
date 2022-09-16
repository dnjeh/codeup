#include <stdio.h>

int n, m;

long long int f(long long int n, long long int m) {
    if(n-m>0) return n-m;
    else return m-n;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}