#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}
long long int lcm(int a, int b) {
    long long int t, i, aa=a, bb=b;
    if(aa<bb) {
        t=aa;
        aa=bb;
        bb=t;
    }
    for(i=1;;i++) {
        if(((aa*i)%bb)==0) return aa*i;
    }
}   // 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%lld\n", lcm(a, b));
}