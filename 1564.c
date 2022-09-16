#include <stdio.h>

int a, b;
int gcd(int a, int b) {
    int i, gccd;
    for(i=1;i<=((a>b)?a:b);i++) {
        if(a%i==0&&b%i==0) gccd=i;
    }
    return gccd;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}