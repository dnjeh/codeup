#include <stdio.h>
long long int f() {
    return -2147483649LL;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
    printf("%lld", f() );
    return 0;
}