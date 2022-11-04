#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    a+=57;
    printf("%c%d", ((a-1)%12+65), (a-1)%10);
}