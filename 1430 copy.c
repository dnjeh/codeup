#include <stdio.h>
#include <stdbool.h> 
bool a[10000001];
int main() {
    int b, c, i, t;
    scanf("%d", &b);
    for(i=0;i<b;i++) {
        scanf("%d", &t);
        a[t]=1;
    }
    scanf("%d", &c);
    bool d[c];
    for(i=0;i<c;i++) {
        scanf("%d", &t);
        printf("%d ", a[t]);
    }
    return 0;
}