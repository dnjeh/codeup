#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int n, int m, int x) {
    return n+m+x-max(max(n,m),x)-min(min(n,m),x);
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}