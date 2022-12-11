#include <stdio.h>
void sfer(int t) {
    printf("*");
    if(t) sfer(t-1);
}
int main() {
    int a;
    scanf("%d", &a);
    sfer(a-1);
}