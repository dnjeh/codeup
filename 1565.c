#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}
long long int lcm(int a, int b) {
    long long int aa=a, bb=b;
    return (long long int)((aa/gcd(aa,bb))*bb);
}   // 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%lld\n", lcm(a, b));
}