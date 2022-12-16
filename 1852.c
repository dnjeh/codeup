#include <stdio.h>
void num(int t, int t1) {
    printf("%d ", t1);
    if(t!=t1) num(t, t1+1);
}
int main() {
    int a;
    scanf("%d", &a);
    num(a, 1);
}