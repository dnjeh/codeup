#include <stdio.h>
int b(char t) {
    if(t=='A') return 10;
    else if(t=='S') return 2;
    else return 1;
}
int main() {
    char t;
    int T, x, m, c, w, sum=0;
    scanf("%c\n%d%d%d%d%d", &t, &T, &x, &m, &c, &w);
    sum+=T;
    sum+=(x*b(t))/w+(!((x*b(t))%w)?0:1);
    if(sum*c<=m) printf("Yes");
    else printf("No");
}