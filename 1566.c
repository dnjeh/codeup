#include <stdio.h>

int a, n;
long long int pow(int a, int n) {
    long long int an=1, i;
    if(a==1) return 1;
    for(i=0;i<n;i++) {
        an*=a;
    }
    return an;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
    scanf("%d%d", &a, &n);
    printf("%lld\n", pow(a, n));
}