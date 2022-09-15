#include <stdio.h>

long long int n;


long long int sqrt(long long int n) {
    long long int i;
    for(i=1;i*i<=n;i++) {}
    return i-1;   
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}