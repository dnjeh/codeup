#include <stdio.h>
int main() {
    int a, max=0, min=1000, i, t;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        scanf("%d", &t);
        if(max<t) max=t;
        if(min>t) min=t;
    }
    printf("%d", max-min);
}