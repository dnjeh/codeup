#include <stdio.h>
double f() {
    return 3.1415926535897;
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
    printf("%.13lf", f());
    return 0;
}