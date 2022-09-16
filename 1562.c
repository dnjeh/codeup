#include <stdio.h>

int n, m;
int min(int n, int m) {
    if(n<m) return n;
    else return m;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}