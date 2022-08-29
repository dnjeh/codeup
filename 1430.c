#include <stdio.h>
#include <stdbool.h> 
int main() {
    bool a[10000001];
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
        d[i]=a[t];
    }
    for(i=0;i<c;i++) {
        printf("%d ", d[i]);
    }
}