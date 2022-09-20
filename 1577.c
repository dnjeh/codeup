#include <stdio.h>
int myabs(int a) {
    if(a<0) a*=-1;
    return a;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}