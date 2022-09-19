#include <stdio.h>

int n, a, b, d[1010];
long long int subsetsum(int a, int b) {
    long long int i, sum=0;
    for(i=a;i<=b;i++) {
        sum+=d[i];
    }
    return sum;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}