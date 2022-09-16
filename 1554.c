#include <stdio.h>

double x;



long long int f(double x) {
    long long int t=(long long int)x;
    if(t>x) return t-1;
    else return t; 
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}