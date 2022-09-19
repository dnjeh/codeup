#include <stdio.h>

int n, a, b, d[1010];
int maxi(int a, int b) {
    int i, maxii, max=-2147483648;
    for(i=a;i<=b;i++) {
        if(d[i]>max) {
            max=d[i];
            maxii=i;
        }
    } 
    return maxii;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}