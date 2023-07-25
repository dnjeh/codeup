#include <stdio.h>
int pas(int a, int b) {
    int ret=0;
    if(a==1&&b==1) ret=1;
    else {
        if(b-1>=1) ret+=pas(a-1, b-1);
        if(b<=a-1) ret+=pas(a-1, b);
    } 
    return ret;
}
void star(int t, int max) {
    printf("%d ", pas(max, t));
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