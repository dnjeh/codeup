#include <stdio.h>

int n, k, d[1010];
int upper_bound(int k) {
    int i;
    for(i=1;i<=n;i++) {
        if(k<d[i]) return i;
    }
    return i;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}