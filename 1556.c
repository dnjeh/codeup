#include <stdio.h>

int n;



long long int f(int n) {
    long long int sum=1;
    int i;
    for(i=1;i<=n;i++) {
        sum*=i;
    }
    return sum;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}