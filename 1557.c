#include <stdio.h>

int n;



int f(int n) {
    int i, t=0;
    for(i=1;i<=n;i++) {
        if(n%i==0) t++;
    }
    return t;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}