#include <stdio.h>

int n;

long long int d[110];

int f() {
    int i, min=0;
    for(i=1;i<=n;i++) {
        if(min>d[i]||i==1) {
            min=d[i];
        }
    }
    return min;
}                      // 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}