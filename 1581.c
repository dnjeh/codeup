#include <stdio.h>
void myswap(int *a, int *b) {
    int t;
    if(*a>*b) {
        t=*a;
        *a=*b;
        *b=t;
    }
}// 이 부분에 들어가야 될 코드를 작성하여 제출
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}