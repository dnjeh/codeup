#include <stdio.h>

int n, d[100010], k;



int f(int k) {
    int i;
    for(i=1;i<=n;i++) {
        if(d[i]==k) return i;
    }
    return -1;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}