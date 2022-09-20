#include <stdio.h>
int mymin(int a, int b) {
    if(a<b) return a;
    else return b;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}