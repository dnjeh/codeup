#include <stdio.h>
float circle(int r) {
    return 3.14*r*r;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}