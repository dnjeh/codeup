#include <stdio.h>
int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    if(a/b>=10000) printf("번호 초과 오류");
    else for(i=1;i<=9999&&i<=a/b;i++) {
        printf("F-%04d\n", i);
    }
}