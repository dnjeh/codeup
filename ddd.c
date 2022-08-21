#include <stdio.h>
int main() {
    int i, a, t, min=100, max=0;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        scanf("%d", &t);
        if(min>t) min=t;
        else if(max<t) max=t;
    }
    printf("%d %d", min, max);
}