#include <stdio.h>
#include <stdbool.h>
int n;


int zero(int n) {
    if(n) return 0;
    else return 1;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}