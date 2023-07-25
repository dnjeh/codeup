#include <stdio.h>
int f;
void baka(int t) {
    if(!t) return;
    if(f||t%10) {
        printf("%d", t%10);
        f=1;
    }
    baka(t/10);
}
int main() {
    int n;
    scanf("%d", &n);
    if(!n) printf("0");
    else baka(n);
}