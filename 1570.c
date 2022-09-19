#include <stdio.h>

int n, k, d[1010];

int lower_bound(int l) {
    int i;
    for(i=1;i<=n;i++) {
        if(l<=d[i]) return i;
    }
    return i;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}