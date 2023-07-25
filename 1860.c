#include <stdio.h>
void star(int t, int max) {
    printf("%d ", t);
    if(t<max) star(t+1, max);
}
void sta(int t) {
    if(t!=1) sta(t-1);
    star(1, t);
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    sta(n);
}