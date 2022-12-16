#include <stdio.h>
int s1m(int t) {
    if(!(t-1)) return 1;
    else return t+s1m(t-1);
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", s1m(a));
}