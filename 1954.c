#include <stdio.h>
void star(int t) {
    printf("*");
    if(t!=1) star(t-1);
}
void sta(int t) {
    star(t);
    printf("\n");
    if(t!=1) sta(t-1);
}
int main() {
    int n;
    scanf("%d", &n);
    sta(n);
}